#include <cstdlib>
#include <iostream>
#include <string>

int main(int argc, const char** argv) {
  std::string sQuery = "Enter miles : ";
  std::cout << sQuery;

  double dMiles, dKilometers;
  std::cin >> dMiles;

  // 1 mile = 1.60934 kilometers
  dKilometers = 1.60934 * dMiles;

  printf("%.1f miles = %.4f kilometers\n", dMiles, dKilometers);

  return 0;
}