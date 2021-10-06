#ifndef MACRO_FRACTAL_CALCULATOR_MANDELBROT_CALCULATOR_H
#define MACRO_FRACTAL_CALCULATOR_MANDELBROT_CALCULATOR_H

#pragma once

#include "base_calculator.h"
#include "calc_params.h"

#include <deque>
#include <memory>

namespace macro_fractal {
namespace calculator {


class Mandelbrot_calculator : public Base_calculator {
public:
    Mandelbrot_calculator();
    ~Mandelbrot_calculator() override;

private:
    void run() override;
    void calculate(const params::Params *params) override;

    std::deque<const params::Params *> params_deq;
};

typedef std::unique_ptr<Mandelbrot_calculator> mandelbrot_calculator_ptr;

}
}
#endif //MACRO_FRACTAL_CALCULATOR_MANDELBROT_CALCULATOR_H
