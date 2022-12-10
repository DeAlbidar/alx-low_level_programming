#include <stdio.h>
/**
 * main - Print all single digit numbers of base 10 starting from 0,
 *
 * only using putchar and without char variables.
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
	putchar((i % 10) + '0');
putchar('\n');
return (0);
}
