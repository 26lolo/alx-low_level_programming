#include "main.h"

/**
 * _strlen_recursion - returns length of string
 * @s: string to be determined
 *
 * Return: length of string of int data type
 */

int _strlen_recursion(char *s)
{

	if (*s != '\0')
	{
		return (1 + _strlen_recursion((s + 1)));
	}
	else
	{
		return (0);
	}
}
