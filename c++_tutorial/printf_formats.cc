#include <cstdlib>
#include <iostream>

int main(int argc, const char** argv) {
  // format specifier string can be used to format output to be printed
  char ch = 'A';
  int iVar = 5;
  float fReal = 100.0;

  printf("char:%c, dec:%d, oct:%o, hex:%x\n", ch, ch, ch, ch);
  printf("int:%d, %5d\n", iVar, iVar);
  printf("float:%f, %.2f, %5.2f, %2.2f\n", fReal, fReal, fReal, fReal);
  return 0;
}