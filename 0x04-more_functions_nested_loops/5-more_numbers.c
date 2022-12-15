#include <stdio.h>
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
int i, j;
for (j = 1; j <= 10; j++)
{
for (i = 1; i <= 14; i++)
{
_putchar(i);
}
_putchar("\n");
}
_putchar('\n');
}
