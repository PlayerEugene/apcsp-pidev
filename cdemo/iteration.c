#include <stdio.h>

int main()
{

int a = 0;
int dev = 2;
  for (int i = 0; i<100; i++)
  {

    if (a % dev == 0)
    {
      printf("%d\n", a);
    }
    a++;
  }
}
