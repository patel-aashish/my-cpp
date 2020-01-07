#include <cstdlib>
#include <iostream>

int main(int argc, const char** argv) {
  float fBigFloat = 1.1111111111;
  float fBigFloat2 = 1.1111111111;
  float fBigFloatSum = fBigFloat + fBigFloat2;

  double dbBigDouble = 1.11111111111111111111;
  double dbBigDouble2 = 1.11111111111111111111;
  double dbBigDoubleSum = dbBigDouble + dbBigDouble2;

  // Float and double loose precision if there is overflow
  printf("fBigFloatSum is %.10f\n", fBigFloatSum);
  printf("fBigDoubleSum is %.20f\n", dbBigDoubleSum);

  return 0;
}