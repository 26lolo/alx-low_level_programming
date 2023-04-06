#include "main.h"

/**
 * factorial - factorial of a given number
 * @n: integer to be considered
 *
 * Return: factorial of int data type
 */

int factorial(int n)
{

	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
