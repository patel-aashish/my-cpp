#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
  vector<int> ivec;
  vector<int>::iterator i, j;
  int t;

  while ( cin >> t ) {
    ivec.push_back(t);
  }

  cout << "Sums of (1+last)..(2+last-1):" << endl;
  for ( i = ivec.begin(), j = (ivec.end()-1); i < j; i++, j-- ) {
    cout << (*i) + (*j) << " ";
  }

  if ( ivec.size() % 2 == 1 )  {
    cout << (*i);
  }
  cout << endl;

  return 0;
}
