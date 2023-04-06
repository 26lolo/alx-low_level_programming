#include "main.h"
#include <mathlib.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 * Return: integer - square root, if none returns -1
 */

int _sqrt_recursion(int n)
{
	int squareroot;
	squarerooot = pow(n, 0.5);

	if (squareroot != pow(n, 0.5))
		return (-1);
	else

		return (_sqrt_recursion(pow(n, 0.5)));
}
