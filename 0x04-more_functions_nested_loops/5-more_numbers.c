#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14 10 times
 *
 */

void more_numbers(void)
{
	int count, n, start, end;

	n = '0';
	start = 0;
	end = '9';

	for (count = 0; count < 10; count++)
	{
		while (start < 2)
		{
			while (n <= end)
			{
				if (end == '4')
					_putchar('1');
				_putchar(n);
				n++;
			}
			start++;
			end = '4';
			n = '0';
		}
		_putchar('\n');
		start = 0;
		n = '0';
		end = '9';
	}
}
