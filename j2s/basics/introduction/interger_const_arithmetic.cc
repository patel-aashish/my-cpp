#include <iostream>

using std::cout;
using std::endl;

int main() {
  cout << 1 + 2                << endl;
  cout << 1 - 5                << endl;
  cout << 1 - 2                << endl;

  cout << 1 * 2                << endl;
  cout << 1 / 3                << endl;

  cout << 1 + 2/1 - 5          << endl;
  cout << (1 + 2)/(1 - 5)      << endl;
  cout << 1 + 2/(1 - 5)        << endl;
  cout << (1 + 2)/1 - 5        << endl;

  cout << 4*5/3 + 7/3          << endl;
  return 0;
}
