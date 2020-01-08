#include <cstdlib>
#include <iostream>
#include <string>

int main(int argc, const char** argv) {
  std::string input_query = "Enter age : ";
  std::string imp_date_msg = "Important date!";
  std::string not_imp_date_msg = "Not important!";
  int age;

  std::cout << input_query;
  std::cin >> age;
  // Important if 1-18, 21 or 50, > 65
  if (age >= 1 && age <= 18) {
    std::cout << imp_date_msg << std::endl;
  } else if (age == 21 || age == 50) {
    std::cout << imp_date_msg << std::endl;
  } else if (age >= 65) {
    std::cout << imp_date_msg << std::endl;
  } else {
    std::cout << not_imp_date_msg << std::endl;
  }

  return 0;
}