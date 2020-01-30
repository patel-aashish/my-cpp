/**
 * @file string_to_secretnumber.cc
 * @author Aashish Patel (aashish.a.patel@gmail.com)
 * @brief Convert string to numbers and back
 * @version 0.1
 * @date 2020-01-30
 *
 * @copyright Copyright (c) 2020
 *
 */
#include <cstdlib>
#include <iostream>
#include <string>

int main(int argc, const char** argv) {
  std::string normal_str, secret_str;
  std::cout << "Enter string: ";
  std::cin >> normal_str;
  for (char c : normal_str) {
    int code = c - 23;
    secret_str += std::to_string(code);
  }

  std::cout << "Secret: " << secret_str << std::endl;
  normal_str = "";
  std::string code_str = "";
  for (auto i = 0; i < secret_str.length(); i += 2) {
    code_str[0] = secret_str[i];
    code_str[1] = secret_str[i + 1];
    int ch_code = std::stoi(code_str) + 23;
    normal_str += (char)ch_code;
  }
  std::cout << "Orignal: " << normal_str << std::endl;
  secret_str.clear();
  normal_str.clear();
  code_str.clear();
  return 0;
}