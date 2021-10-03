FROM ubuntu:latest as build

#
#RUN ln -snf /usr/share/zoneinfo/$TZ /etc/localtime && echo $TZ > /etc/timezone
ARG DEBIAN_FRONTEND="noninteractive"
ENV TZ=Europe/Moscow

# установка libboost-all-dev
RUN apt-get update && apt-get install -y \
        cmake \
        libboost-all-dev

RUN apt-get install -y build-essential # Dima told me that

# Скопируем директорию /src в контейнер
ADD . /app/calculator

# Установим рабочую директорию для сборки проекта
WORKDIR /app/calculator/cmake-build-release

# Выполним сборку проекта
RUN cmake -DCMAKE_BUILD_TYPE=Release .. && cmake --build .


FROM ubuntu:latest

# Запускать незнакомое приложение под root'ом неприлично :)
RUN groupadd -r sample && useradd -r -g sample sample
USER sample

WORKDIR /app/calculator

COPY --from=build /app/calculator/cmake-build-release/macro-fractal-calculator .

# Установим точку входа
CMD ["./macro-fractal-calculator"]