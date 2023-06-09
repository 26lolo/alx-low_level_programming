#include "main.h"

/**
 * _pow_recursion - returns value of x raised to power of y
 * @x: integer base
 * @y: integer exponent
 *
 * Return: result of x raised to y, -1 if y is less than 0.
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (-1);
}
