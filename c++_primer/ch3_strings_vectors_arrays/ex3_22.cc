#include <cstring>
#include <iostream>
#include <string>
#include <vector>

using std::endl;
using std::cin;
using std::cout;
using std::string;
using std::vector;

int main() {
  string word;
  vector<string> text;

  while ( cin >> word ) {
    text.push_back(word);
  }

  for ( auto ti = text.begin(); ti != text.end(); ti++ ) {
    for ( auto si = (*ti).begin(); si != (*ti).end(); si++ ) {
      *si = toupper(*si);
    }
  }

  for ( auto ti = text.begin(); ti != text.end(); ti++ ) {
    cout << *ti << " ";
  }
  cout << endl;

  return 0;
}
