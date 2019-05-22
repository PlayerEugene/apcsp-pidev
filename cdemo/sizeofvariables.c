#include<stdio.h>

int main()
{
  int a = 545;
  float b = 12.533;
  char c = 'a';
  double d = 125.125;
  short int f = 1;
  signed int e = 12;

  // print value and size of an int variable
  printf("int a value: %d and size: %d bytes\n", a, sizeof(a));
  printf("float b value: %f and size: %f bytes\n", b, sizeof(b));
  printf("char c value: %c and size: %c bytes\n", c, sizeof(c));
  printf("double d value: %f and size: %f bytes\n", d, sizeof(d));
  printf("signed int e value: %d and size: %d bytes\n", e, sizeof(e));
  printf("short int f value: %d and size: %d bytes\n", f, sizeof(f));
}

