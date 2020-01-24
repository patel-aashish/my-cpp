/**
 * @file pine_tree_display.cc
 * @author Aashish Patel <aashish.a.patel@gmail.com>
 * @brief A program to display pine tree
 * @version 0.1
 * @date 2020-01-24
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
  int n_rows = 0;
  std::cout << "Enter the number of rows: ";
  std::cin >> n_rows;
  for (auto i = 0; i < n_rows; i++) {
    auto j = 0;
    auto begin = n_rows - i;
    auto end = n_rows + i;
    while (j < 2 * n_rows) {
      if (j >= begin && j <= end) {
        std::cout << "#";
      } else {
        std::cout << " ";
      }
      j++;
    }
    std::cout << std::endl;
  }
  for (auto i = 0; i < 2 * n_rows; i++) {
    if (i != n_rows) {
      std::cout << " ";
    } else {
      std::cout << "#";
    }
  }
  return 0;
}