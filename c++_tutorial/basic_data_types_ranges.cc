#include <cstdlib>
#include <iostream>
#include <limits>

// Variables tell compiler how much space to reverse for data and what name to
// associate that data.

int main(int argc, const char** argv) {
  bool bFlag = true;
  char chLetter = 'A';
  unsigned short int u16Age = 30;
  short int siWeight = 80;
  int nDays = 7;
  long lBigNum = 110101010;
  float fPi = 3.14159;
  double dbBigFloat = 1.1111111111111;
  long double ldPi = 3.14159;
  auto whatWillIbe = true;

  std::cout << "boolean, min= " << std::numeric_limits<bool>::min()
            << " & max = " << std::numeric_limits<bool>::max() << std::endl;

  std::cout << "char, min= " << std::numeric_limits<char>::min()
            << " & max = " << std::numeric_limits<char>::max() << std::endl;

  std::cout << "unsigned short int, min= "
            << std::numeric_limits<unsigned short int>::min()
            << " & max = " << std::numeric_limits<unsigned short int>::max()
            << std::endl;

  std::cout << "short int, min= " << std::numeric_limits<short int>::min()
            << " & max = " << std::numeric_limits<short int>::max()
            << std::endl;

  std::cout << "int, min= " << std::numeric_limits<int>::min()
            << " & max = " << std::numeric_limits<int>::max() << std::endl;

  std::cout << "long, min= " << std::numeric_limits<long>::min()
            << " & max = " << std::numeric_limits<long>::max() << std::endl;

  std::cout << "long long, min= " << std::numeric_limits<long long>::min()
            << " & max = " << std::numeric_limits<long long>::max()
            << std::endl;

  std::cout << "float, min= " << std::numeric_limits<float>::min()
            << " & max = " << std::numeric_limits<float>::max() << std::endl;

  std::cout << "double, min= " << std::numeric_limits<double>::min()
            << " & max = " << std::numeric_limits<double>::max() << std::endl;

  std::cout << "long double, min= " << std::numeric_limits<long double>::min()
            << " & max = " << std::numeric_limits<long double>::max()
            << std::endl;

  return 0;
}