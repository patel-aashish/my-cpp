#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main(int argc, const char** argv) {
  if (argc != 1) {
    // Command line arguments were passed
    std::cout << "You entered " << argc - 1 << " arguments." << std::endl;
  }

  for (int i = 1; i < argc; i++) {
    std::cout << "Argument " << i << " is " << argv[i] << std::endl;
  }

  return 0;
}