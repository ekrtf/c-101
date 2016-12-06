#include <stdio.h>

int main()
{
	int a, b;

	a = 8;
	b = 10;

	printf("Values BEFORE swapping: a = %d, b = %d", a, b);

	a = a + b;
	b = a - b;
	a = a - b;

	printf("Values AFTER swapping: a = %d, b = %d", a, b);
}