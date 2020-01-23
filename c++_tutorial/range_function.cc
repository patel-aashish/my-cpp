/**
 * @file range_function.cc
 * @author Aashish Patel <aashish.a.patel@gmail.com>
 * @brief A program for range function in cpp
 * @version 0.1
 * @date 2020-01-23
 *
 * @copyright Copyright (c) 2020
 *
 */
#include <cstdlib>
#include <iostream>
#include <vector>

/**
 * @brief Range function
 *
 * @param start, starting value
 * @param end, end value, may or not be included based on step size
 * @param step, step size
 * @return std::vector<int>, result vector with the range of values
 */
std::vector<int> Range(int start, int end, int step) {
  std::vector<int> result;
  for (auto i = start; i <= end; i += step) {
    result.push_back(i);
  }
  return result;
}

int main(int argc, const char** argv) {
  int start, stop, step;
  std::cout << "Please enter <start> <stop> <range>: ";
  std::cin >> start >> stop >> step;

  std::vector<int> result;
  result = Range(start, stop, step);

  std::cout << "Result: " << std::endl;
  for (auto val : result) {
    std::cout << val << " ";
  }
  std::cout << std::endl;
  return 0;
}