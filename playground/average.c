#include <stdio.h>

int main()
{
	int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int sum = 0;
	float average = 0.0;

	for (int i = 0; i < sizeof(array); i++) {
		sum = sum + array[i];
	}

	average = (float) sum / sizeof(array);

	printf("The average is %.2f", average);
	return 0;
}