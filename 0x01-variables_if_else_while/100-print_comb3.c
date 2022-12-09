#include <stdio.h>

int main() {
  int d1, d2;

	for (d1 = 0; d1 < 10; d1++)
	{
		for (d2 = 1; d2 < 10; d2++)
		{
			putchar((d1 % 10) + '0');
			putchar((d2 % 10) + '0');

			if (d1 == 9 && d2 == 9)
				continue;
			
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
