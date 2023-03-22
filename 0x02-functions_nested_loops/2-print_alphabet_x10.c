#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times in lowercase then a new line
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char ch = 'a';

	while (count <= 9)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
	}
	count++;
	_putchar('\n');
}
