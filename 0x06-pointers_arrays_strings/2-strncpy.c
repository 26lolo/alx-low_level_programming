#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: destination string
 * @src: string to be copied
 * @n: number of bytes to be copied
 *
 * Return: Pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
