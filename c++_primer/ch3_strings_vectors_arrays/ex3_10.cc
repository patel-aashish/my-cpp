#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
  string s;

  cin >> s; 

  cout << "Result: ";
  for (char ch: s) {
    if ( !ispunct(ch) ) {
      cout << ch;
    }
  }

  cout << endl;

  return 0;
}
