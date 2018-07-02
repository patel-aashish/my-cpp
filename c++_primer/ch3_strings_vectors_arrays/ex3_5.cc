#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
  string temp, s;

  while (cin >> temp) {
    s += temp + " ";
  }

  cout << "Result: " << s << endl;

  return 0;
}
