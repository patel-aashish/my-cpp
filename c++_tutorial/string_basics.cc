/**
 * @file string_basics.cc
 * @author Aashish Patel<aashish.a.patel@gmail.com>
 * @brief std::string basics
 * @version 0.1
 * @date 2020-01-29
 *
 * @copyright Copyright (c) 2020
 *
 */
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>

int main(int argc, const char** argv) {
  std::vector<std::string> str_vec(10);

  // Creating a string
  std::string str("I am a string");
  str_vec[0] = str;

  // Front and back of the string
  std::cout << str.front() << " " << str.back() << std::endl;
  // Length and Capacity of the string
  std::cout << "capacity: " << str.capacity() << " Length: " << str.length()
            << std::endl;
  // Create a string from another string
  std::string str2(str);
  str_vec[1] = str2;
  // Create a string using part of the string
  std::string str3(str, 5);
  str_vec[2] = str3;
  // Create a string with repeated characters
  std::string str4(5, '*');
  str_vec[3] = str4;
  // Append string
  str_vec[4] = str.append(" and  you are not");
  str_vec[5] = str + " and you are not";
  str_vec[6] = str.erase(13, str.length() - 1);

  // for (auto v : str_vec) {
  //   std::cout << v << std::endl;
  // }

  // Find a string
  if (str.find("string") != std::string::npos) {
    std::cout << "1st index " << str.find("string") << std::endl;
  }

  std::cout << "substr: " << str.substr(6, 6) << std::endl;

  // Reverse string
  std::reverse(str.begin(), str.end());

  std::cout << "reverse: " << str << std::endl;

  // Case change
  std::transform(str2.begin(), str2.end(), str2.begin(), ::toupper);
  std::cout << "upper: " << str2 << std::endl;

  std::transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
  std::cout << "upper: " << str2 << std::endl;

  // Ascii code
  char ch = 'A';
  int n = ch;
  std::cout << "ch: Ascii code" << std::endl;
  std::cout << ch << ": " << n << " " << (int)ch << std::endl;

  return 0;
}