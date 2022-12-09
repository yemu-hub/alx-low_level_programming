#include <stdio.h>
/**
 * main-entry prgram.
 * Return: success 0.
 */
int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		putchar((number % 10) + '0');
                if (number == 9)
			continue;

		putchar(',');
		putchar(' ');
		number++;
	}
	putchar('\n');
	return (0);
}
