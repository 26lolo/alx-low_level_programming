#include "main.h"

/**
 * actual_prime - calculates if a number is prime
 * @n: number to determine
 * @i: iterate
 *
 * Return: 1 if n is prime, otherwise 0
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}

/**
 * is_prime_number - returns prime number of integer
 * @n: number to be determined
 *
 * Return: 1 if n is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (actual_prime(n, i - 1) <= 1)
		return (0);
	return (1);
}
