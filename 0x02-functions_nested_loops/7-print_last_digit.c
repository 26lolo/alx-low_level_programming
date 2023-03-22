#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: Number to be considered.
 *
 * Return: Value of last digit.
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit != 0)
		_putchar(0 + last_digit);
		return (last_digit);
}
