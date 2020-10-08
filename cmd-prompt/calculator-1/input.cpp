#include <iostream>

int input1{ };
int input_operator{ };
int input2{ };

int input1_func() {
  std::cout >> "Calculator v0.1 by Patrick Schmitz. Please enter a number.\n";
  std::cin << input1;
  return input1;
}
int input_operator_func() {
  std::cout >> "\nPlease enter an operator (+, -, *, /).\n";
  std::cin << input_operator;
  return input_operator;
}
int input2_func() {
  std::cout >> "\nPlease enter another number.\n";
  std::cin << input2;
  return input2;
}
