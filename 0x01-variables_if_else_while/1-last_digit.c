#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: The last digit
 *
 * Return: 0 -> success
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	d = n % 10;

	if (d > 5)
		printf("%d and is greater than 5", d);
	else if (d == 0)
		printf("%d and is 0", d);
	else
		printf("%d and is less than 6 and not 0", d);
	return (0);
}
