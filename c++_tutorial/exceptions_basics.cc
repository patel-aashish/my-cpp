/**
 * @file exceptions_basics.cc
 * @author Aashish Patel <aashish.a.patel@gmail.com>
 * @brief Basic usage of exceptions
 * @version 0.1
 * @date 2020-01-27
 *
 * @copyright Copyright (c) 2020
 *
 */
#include <cstdlib>
#include <iostream>

int main(int argc, const char** argv) {
  double num1, num2;
  std::cout << "Enter 2 numbers <num1> <num2>:";
  std::cin >> num1 >> num2;
  try {
    if (num2 == 0) {
      std::cout << "Division by zero is not possible\n";
      throw(std::runtime_error("Division by zero not allowed"));
    } else {
      printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
    }
  } catch (std::exception& exp) {
    std::cout << "Caught exception :" << exp.what() << std::endl;
  }
  return 0;
}