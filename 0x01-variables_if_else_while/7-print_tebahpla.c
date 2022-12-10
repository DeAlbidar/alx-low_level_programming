#include <stdio.h>
/**
 * Prints the lowercase alphabet in reverse, followed by a new line.
 * 
 *printf, puts is forbidden
 *
 * putchar twice in your code
 *
 * Return: Always 0.
 */
int main(void)
{
  char letter;
for (letter = 'z'; letter >= 'a'; letter--)
	putchar(letter);
putchar('\n');
return (0);
}
