#include <stdio.h>
/**
 * main-entry into the program.
 * Return: success 0.
 */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		putchar((number % 10) + '0');
		number++;
	}
	putchar('\n');
	return (0);
}
