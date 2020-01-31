/**
 * @file trim_whitespaces.cc
 * @author Aashish Patel (aashish.a.patel@gmail.com)
 * @brief Trim whitespaces of a string
 * @version 0.1
 * @date 2020-01-31
 *
 * @copyright Copyright (c) 2020
 *
 */
#include <iostream>
#include <string>

/**
 * @brief trim white space from front and back of string
 *
 * @param str, string from which whitespaces are to be removed
 * @return std::string, output without whitespaces
 */
std::string TrimWhitespaces(std::string str) {
  std::string whitespace = " \n\t\r\f";
  str.erase(0, str.find_first_not_of(whitespace));
  str.erase(str.find_last_not_of(whitespace) + 1);
  return str;
}

int main(int argc, const char** argv) {
  std::string str;
  std::cout << "Enter a string with whitespaces: ";
  std::getline(std::cin, str);

  str = TrimWhitespaces(str);
  std::cout << "*" << str << "*\n";

  str.clear();
  return 0;
}