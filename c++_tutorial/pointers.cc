/**
 * @file pointers.cc
 * @author Aashish Patel <aashish.a.patel@gmail.com>
 * @brief A program to demonstrate pointer and its usage
 * @version 0.1
 * @date 2020-01-23
 *
 * @copyright Copyright (c) 2020
 *
 */
#include <cstdlib>
#include <iostream>

/**
 * @brief A function to update age using call by value
 *
 * @param age, age to be updated
 */
void UpdateAge(int age) { age = 34; }

/**
 * @brief A function to update age using pointer
 *
 * @param age, pointer to the age that has to be updated
 */
void UpdateAge(int* age) {
  // Update age via pointer
  *age = 34;
}

int main(int argc, const char** argv) {
  int age = 50;
  std::cout << "Age is " << age << std::endl;
  UpdateAge(age);
  std::cout << "Age is " << age << std::endl;
  // Declare a pointer to integer and assign it address of age
  int* p_age = &age;
  UpdateAge(p_age);
  std::cout << "Age is " << age << std::endl;

  // Array navigation using pointer
  int array[] = {1, 2, 3, 4};
  // No need to specify dereference operator for array name, as it itself is a
  // pointer
  int* p_arr = array;
  std::cout << "First element is " << *p_arr << " at address " << p_arr
            << std::endl;
  p_arr++;
  std::cout << "Second element is " << *p_arr << " at address " << p_arr
            << std::endl;
  p_arr--;
  std::cout << "Again,first element is " << *p_arr << " at address " << p_arr
            << std::endl;

  // Note that the pointer arithmetic is different, increment and decrement is
  // done based on the base type size
  return 0;
}