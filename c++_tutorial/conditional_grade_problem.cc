#include <cstdlib>
#include <iostream>
#include <string>

int main(int argc, const char** argv) {
  std::cout << "Enter age : ";
  int age;
  std::cin >> age;
  if (age < 5) {
    std::cout << "Too young for school!" << std::endl;
  } else if (age == 5) {
    std::cout << "Go to kindergarten" << std::endl;
  } else if (age > 5 && age <= 17) {
    printf("Go to grade %d \n", age - 5);
  } else {
    std::cout << "Go to college!" << std::endl;
  }

  return 0;
}