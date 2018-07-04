#include <iostream>
#include <cstring>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
  vector<string> svec;
  string s;

  while ( cin >> s ) {
    svec.push_back(s);
  }
  
  cout << "Uppercase: " << endl;
  auto i = 0;
  for ( auto s : svec ) {
    i++;
    for ( auto &c : s ) {
      c = toupper(c);
    }
    if ( i > 1 && i % 8 == 1 ) {
      cout << endl;
    }
    cout << s << " ";
  }
  cout << endl;
  
  return 0;
}
