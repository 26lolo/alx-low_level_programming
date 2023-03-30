#include "main.h"

/**
 * string_toupper - changes all lowercases of a string to uppercases
 * @str: string to be changed
 *
 * Return: pointer to the changed string
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		str[index] -= 32;
		index++;
	}
	return (str);
}
