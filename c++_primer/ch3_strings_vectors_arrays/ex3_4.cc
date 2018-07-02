#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string s1, s2;
  cin >> s1 >> s2;
  auto s1_size = s1.size();
  auto s2_size = s2.size();
  if ( s1_size == s2_size ) {
    cout << "Strings are equal" << endl;
  } else {
    if ( s1_size > s2_size ) {
      cout << s1 << " is longer" << endl;
    } else {
      cout << s2 << " is longer" << endl;
    }
  }

  return 0;
}

