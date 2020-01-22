#include <cstdlib>
#include <iostream>
#include <numeric>
#include <vector>

int main(int argc, const char** argv) {
  std::vector<int> my_vec(10);
  std::iota(std::begin(my_vec), std::end(my_vec), 0);

  for (auto val : my_vec) {
    if (!(val % 2)) {
      std::cout << val << " is even" << std::endl;
    }
  }

  my_vec.clear();
  return 0;
}