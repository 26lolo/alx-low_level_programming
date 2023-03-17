#include <stdio.h>

/**
 * main - prints alphabet in lowercase except e and q
 *
 * Return: 0
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'q' && alphabet != 'e')
			putchar(alphabet);
	}

	putchar('\n');
	return (0);
}
