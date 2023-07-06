#include "main.h"

/**
 * prime_num - determine if n is a prime.
 *
 * @n: int number.
 * @prime: test case for prime
 *
 * Return: 1 if n is a prime, 0 if not.
*/

int prime_num(int n, int prime)
{
	if (n % prime == 0)
		return (0);

	else if (n >= (prime + 1) * (prime * 1))
		return (prime_num(n, prime + 1));

	return (1);
}

/**
 * is_prime_number -  determine the prime number.
 *
 * @n: int number.
 *
 * Return: 1 if n is a prime, 0 if not
*/

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime_num(n, 2));
}
