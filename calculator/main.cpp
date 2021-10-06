#include "executors/mandelbrot_calculator.h"

#include <memory>

using namespace macro_fractal::calculator;

int main () {
    mandelbrot_calculator_ptr calc_ptr = std::make_unique<Mandelbrot_calculator>();


    return EXIT_SUCCESS;
}