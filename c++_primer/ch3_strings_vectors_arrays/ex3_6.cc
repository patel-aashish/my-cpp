#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
  string s;

  cin >> s; 

  for (char &ch: s) {
    ch = 'X';
  }

  cout << "Result: " << s << endl;

  return 0;
}
