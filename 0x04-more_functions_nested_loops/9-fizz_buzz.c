#include <stdio.h>

/**
 * main - Fizz-Buzz test
 *
 * Description: print numbers 1:100 replacing multiples of 3 with Fizz,
 *multiples of 5 with Buzz, and multiples of both with FizzBuzz.
 *
 * Return: 0 -> success
*/

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{

		if (n % 3 == 0)
		{
			if (n % 3 == 0 && n % 5 == 0)
				printf("FizzBuzz ");
			else
				printf("Fizz ");
		}
		else if (n % 5 == 0)
			if (n == 100)
				printf("Buzz");
			else
				printf("Buzz ");

		else
			printf("%d ", n);
	}
	printf("\n");
	return (0);
}
