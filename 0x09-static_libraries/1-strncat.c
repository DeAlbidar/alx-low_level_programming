#include "main.h"

/**
 * _strncat - The _strncat function is similar to the _strcat function,
 *	except that it will use at most n bytes from src; and
 *	src does not need to be null-terminated if it contains n or more bytes
 * @dest: the string to be appended
 * @src: The string to appended to dest
 * @n: The nomber of bytes from src to be appended to dest
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
