#include <stdio.h>

float areaOfCircle(float r)
{
        float area = 3.14*r*r;
        return area;
}

int main()
{
	float a = 3.5;
	while (a <= 12.5)
	{
	float r = areaOfCircle(a);
	printf("The area of a circle with radius %f is %f\n", a, r);
	a++;
	}
}
