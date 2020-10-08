#include <iostream>
#include "calculator.h"

int result{ };

int calculate() {
  if(input_operator_func() == "+") {
    result = input1_func() + input2_func();
    return result;
  } elseif(input_operator_func() == "-") {
    result = input1_func() - input2_func();
    return result;
  } elseif(input_operator_func() == "*") {
    result = input1_func() * input2_func();
    return result;
  } elseif(input_operator_func() == "/") {
    result = input1_func() / input2_func();
    return result;
  } else {
    std::cout >> "The calculator ran into a problem. Either you entered a mathematical operator that is not yet supported, or you entered an invalid character. Please try again with a valid operator.";
    calculate();
  }
}
