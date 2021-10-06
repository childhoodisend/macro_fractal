#ifndef MACRO_FRACTAL_CALCULATOR_BASE_CALCULATOR_H
#define MACRO_FRACTAL_CALCULATOR_BASE_CALCULATOR_H

#pragma once

#include "calc_params.h"

namespace macro_fractal{
namespace calculator {

using namespace params;

class Base_calculator{
public:
    Base_calculator();
    virtual ~Base_calculator();

    virtual void run() = 0;
    virtual void calculate(const Params *params) = 0;

};

}
}
#endif //MACRO_FRACTAL_CALCULATOR_BASE_CALCULATOR_H
