#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main(int argc, const char** argv) {
  std::string input_query = "Please enter a calculation (10 - 5): ";
  std::cout << input_query;
  std::string input_string, input_arg;
  getline(std::cin, input_string);
  std::stringstream ss_input(input_string);
  std::vector<std::string> args;
  while (getline(ss_input, input_arg, ' ')) {
    args.push_back(input_arg);
  }

  std::string op = args[1];
  float num1 = std::stof(args[0]);
  float num2 = std::stof(args[2]);
  if (op == "-") {
    printf("%.2f %s %.2f = %.2f", num1, op.c_str(), num2, num1 - num2);
  } else if (op == "+") {
    printf("%.2f %s %.2f = %.2f", num1, op.c_str(), num2, num1 + num2);
  } else if (op == "*") {
    printf("%.2f %s %.2f = %.2f", num1, op.c_str(), num2, num1 * num2);
  } else if (op == "/") {
    printf("%.2f %s %.2f = %.2f", num1, op.c_str(), num2, num1 / num2);
  } else {
    std::cout << "Invalid operator specified!" << std::endl;
    std::cout << "Supported ops are +, - , /, *" << std::endl;
  }

  return 0;
}