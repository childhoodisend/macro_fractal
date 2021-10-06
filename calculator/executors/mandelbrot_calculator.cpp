#include "mandelbrot_calculator.h"
#include <stdexcept>
#include <iostream>

namespace macro_fractal{
namespace calculator{

Mandelbrot_calculator::Mandelbrot_calculator() {
    std::cout << "Mandelbrot_calculator::Mandelbrot_calculator()" << std::endl;
}

Mandelbrot_calculator::~Mandelbrot_calculator() {
    std::cout << "Mandelbrot_calculator::~Mandelbrot_calculator" << std::endl;
}

void Mandelbrot_calculator::run() {
    throw std::runtime_error("Mandelbrot_calculator::run() err : unimplemented run");
}

void Mandelbrot_calculator::calculate(const macro_fractal::params::Params *params) {
    throw std::runtime_error("Mandelbrot_calculator::calculate() err : unimplemented calculate");
}

}
}