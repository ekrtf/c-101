#include <stdio.h>

int main()
{
	int x, y, sum;
	float z;

	x = 10;
	y = 4;
	z = 4.9;

	sum = x + y + z; // => 18

	printf("The sum of %d and %d is %d", x, y, sum);
}