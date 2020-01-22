/**
 * @file functions.cc
 * @author Aashish Patel <aashish.a.patel@gmail.com>
 * @brief A program to demonstrate a simple add function
 * @version 0.1
 * @date 2020-01-22
 *
 * @copyright Copyright (c) 2020
 *
 */
#include <cstdlib>
#include <iostream>

/**
 * @brief A function that adds two double numbers
 *
 * @param n1 , first number
 * @param n2 , second number
 * @return double, sum of n1 and n2
 */
double AddNumbers(double n1, double n2);

int main(int argc, const char** argv) {
  double n1, n2;
  std::cout << "Enter 1st number:";
  std::cin >> n1;
  std::cout << "Enter 2nd number:";
  std::cin >> n2;
  printf("%.1lf + %.1lf = %.1lf\n", n1, n2, AddNumbers(n1, n2));

  return 0;
}

double AddNumbers(double n1, double n2) { return n1 + n2; }