#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

  float d = 1.5;
  float e = 2.5;
  printf("The address of d is %f\n", &d);
  printf("The address of e is %f\n", &e);
  float* ad = &d;
  float* ae = &e;
  float tmp;
  tmp = d;
  d = e;
  e = tmp;
}
