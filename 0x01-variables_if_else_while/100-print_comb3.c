#include <stdio.h>
/**
 * main-entry program;
 * Return: success 0.
 */
int main(void)
{
	int d1, d2;

	for (d1 = 0; d1 < 9; d1++)
	{
		d2 = d1 + 1;

		while (d2 < 10)
		{
			putchar((d1 % 10) + '0');
			putchar((d2 % 10) + '0');

			if ( d1 == 8 && d2 == 9)
				continue;

			putchar(',');
			putchar(' ');
			d2++;
		}

	}

	putchar('\n');
	return (0);
}
