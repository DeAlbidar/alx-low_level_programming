#include "main.h"
/**
 * _islower -> checks if the character is lower case
 *
 * @c: character augment
 *
 * Return: return 1 if satisfies the condition, else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
