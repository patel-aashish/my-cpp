#include <iostream>
#include <vector>

using std::endl;
using std::cin;
using std::cout;
using std::vector;

int main() {
  vector<int> ivec(10);

  cout << "Please enter 10 ints:" << endl;
  for ( auto i = 0; i < ivec.size(); i++ ) {
    cin >> ivec[i];
  }

  for ( auto iter = ivec.begin(); iter != ivec.end(); iter++ ) {
    *iter = (*iter) * 2;
  }

  cout << "Result: " << endl;
  for ( auto iter = ivec.begin(); iter != ivec.end(); iter++ ) {
    cout << *iter << " ";
  }
  cout << endl;

  return 0;
}
