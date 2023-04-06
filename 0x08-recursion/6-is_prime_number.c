#include "main.h"

/**
 * is_prime_number - function that checks if integer is a prime number
 * @n: integer to be checked
 *
 * Return: 1 if n is prime number, otherwise 0
 *
 */

int is_prime_number(int n)
{
	if ((n % 1) == 0 && (n % n) == 0)
		return (1);
	else 
		return (0);
}
