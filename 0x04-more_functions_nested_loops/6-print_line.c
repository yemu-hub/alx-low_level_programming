#include "main.h"

/**
 * print_line - draws straight line.
 * @n: input parameter.
 * Return: straight line.
 */
void print_line(int n)
{
	int rep;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for ( rep = 1; rep <= n; rep++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
