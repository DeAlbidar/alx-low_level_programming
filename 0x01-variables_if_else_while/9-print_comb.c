#include <stdio.h>

int main() {
  int i;

	for (i = 0; i < 10; i++){
    	putchar((i % 10) + '0');
		if (i == 9)
			continue;
		
		putchar(',');
		putchar(' ');
    }

	putchar('\n');

	return (0);
}
