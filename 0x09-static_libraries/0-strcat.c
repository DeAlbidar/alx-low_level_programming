#include "main.h"

/**
 * _strcat - This function appends the src string to the dest string,
 *	overwriting the terminating null byte at the end of dest,
 *	and then adds a terminating null byte.
 * @dest: A pointer to the string to be concatenated
 * @src: The source string to be appended to @dest
 * Return: A pointer to the destination string @dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
