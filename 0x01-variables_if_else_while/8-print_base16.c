#include <stdio.h>

int main() {
  int i;
	char letter;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
