#include <cstdlib>
#include <iostream>

int main(int argc, const char** argv) {
  // Multiple ways of initializing a array
  // Without initializer, all elements are garbage
  int arr1[10];
  // Without specifying the size, in this case the size is determined by the
  // number of elements in the initializer list
  int arr2[] = {1, 2, 3, 4, 5};
  // partial init, in below case only the first element is 1 rest all are
  // initialized to 0
  int arr3[5] = {1};

  // Accessing an array element using indexes
  std::cout << "First element of arr2 is : " << arr2[0] << std::endl;

  // Updating an element of array
  arr1[0] = 6;
  std::cout << "First element of arr1 is : " << arr1[0] << std::endl;

  // Checking the size of an array
  std::cout << "size of arr3 is : " << sizeof(arr3) / sizeof(int) << std::endl;

  // Multidimensional arrays, like excel sheets [a][b][c], where a specifies the
  // number of pages, b specifies the number of columns and c specifies the
  // number of rows
  int arr4[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};

  // Accessing element
  // Below we are accessing page 1, column 1, and row 0
  std::cout << "multi dimensional array element: " << arr4[1][1][0]
            << std::endl;

  return 0;
}