#include <cstdlib>
#include <iostream>
#include <string>

int main(int argc, const char** argv) {
  int iNum1, iNum2;
  if (argc == 3) {
    iNum1 = std::stoi(argv[1]);
    iNum2 = std::stoi(argv[2]);
  } else {
    std::cout << "Invalid number of args specified: " << argc << std::endl;
    std::cout << "Usage: <program> num1 num2" << std::endl;
    std::string sQuery = "Enter a number: ";
    std::string sNum1, sNum2;
    std::cout << sQuery;
    std::cin >> sNum1;
    std::cout << sQuery;
    std::cin >> sNum2;
    iNum1 = std::stoi(sNum1);
    iNum2 = std::stoi(sNum2);
  }

  printf("%d + %d = %d\n", iNum1, iNum2, (iNum1 + iNum2));
  printf("%d - %d = %d\n", iNum1, iNum2, (iNum1 - iNum2));
  printf("%d * %d = %d\n", iNum1, iNum2, (iNum1 * iNum2));
  printf("%d / %d = %d\n", iNum1, iNum2, (iNum1 / iNum2));
  // NOTE: for displaying % we use %%
  printf("%d %% %d = %d\n", iNum1, iNum2, (iNum1 % iNum2));

  return 0;
}