#include <stdio.h>
/**
 * main-entry program.
 * Return: success 0.
 */
int main(void)
{
	char let;

	int number = 0;

	while (number < 10)
	{
		putchar((number % 10) + '0');
		number++;
	}
	for ( let = 'a'; let <= 'f'; let++)
		putchar(let);
	putchar('\n');
	return (0);
}
