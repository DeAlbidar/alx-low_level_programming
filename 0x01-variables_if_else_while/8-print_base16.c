#include <stdio.h>
/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
char letter;
for (i = 0; i < 10; i++)
	putchar((i % 10) + '0');
for (letter = 'a'; letter <= 'f'; letter++)
	putchar(letter);
putchar('\n');
return (0);
}
