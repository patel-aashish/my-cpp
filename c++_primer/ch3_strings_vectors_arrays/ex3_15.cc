#include <iostream>
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

  cout << "svec: ";
  for ( auto s : svec ) {
    cout << s << " ";
  }
  cout << endl;

  return 0;
}
