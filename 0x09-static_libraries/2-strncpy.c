#include "main.h"
/**
 * _strncpy - a function that copies a string
 * @dest: The data storing the string copy
 * @src: The source string
 * @n: The maximun number of bytes to be copied
 * Return: A pointer to the resulting string dest
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
