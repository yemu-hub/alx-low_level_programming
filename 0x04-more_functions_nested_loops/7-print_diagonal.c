#include "main.h"

/**
 * print_diagonl - draws a diagonal line.
 * @n: input parameter.
 * Return: diagonal
 */
void print_diagonal(int n)
{
	int rep, repSep;
         
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (rep = 1; rep <= n; rep++)
		{
			for ( repSep = 1; repSep < rep; repSep++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
