#include <stdio.h>

int main()
{
  int a = 0;
  int b = 3;
  // if statement to test is a is equal to 0
  if (a == 0)
  {
    printf("a is 0\n");
  }
  else
  {
    printf("a is not 0\n");
  }
  
  if (b != a)
  {
    printf("b is not equal to a\n");
  }
  else
  {
    printf("b is equal to a\n");
  }

  if (a > b)
  {
    printf("a is greater than b\n");
  }
  else
  {
    printf("a is not greater than b\n");
  }

  if (a >= b)
  {
    printf("a is greater than or equal to b\n");
  }
  else
  {
    printf("a is not greater than or equal to b\n");
  }

  if (a == 0 && b == 0)
  {
    printf("a and b are 0\n");
  }
  else
  {
    printf("a and b are not 0\n");
  }

  if (a == 0 || b == 0)
  {
    printf("a or b is 0\n");
  }
  else
  {
    printf("neither a or b are 0\n");
  }

  if (!(a == 0))
  {
    printf("a is not equal to 0\n");
  }
  else
  {
    printf("a is equal to 0\n");
  }
}
