#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
  vector<int> iv(11,0);
  unsigned int grade;

  while ( cin >> grade ) {
    auto it = iv.begin();
    if ( grade <= 100 ) {
      it += (grade/10);
      (*it)++;
    }
  }

  cout << "Grade clusters:" << endl;
  for ( auto i : iv ) {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}
