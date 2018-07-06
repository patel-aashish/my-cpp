#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
  vector<int> ivec;
  int i, j;

  while ( cin >> i ) {
    ivec.push_back(i);
  }
  auto size = ivec.size();
  cout << "Sums of (1+last)..(2+last-1):" << endl;
  for ( i = 0, j = (size-1); i < j; i++, j-- ) {
    cout << ivec[i] + ivec[j] << " ";
  }

  if ( size % 2 == 1 )  {
    cout << ivec[i];
  }
  cout << endl;

  return 0;
}
