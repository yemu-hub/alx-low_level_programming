#include "main.h"

/**
 * print_square - prints square followed by new line
 * @size: size of width and length
 * Return: square result.
 */
void print_square(int size)
{
	int rep, repSep;

	if ( size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for ( rep = 1; rep <= size; rep++)
		{
			_putchar('#');
			for ( repSep = 2; repSep <= size; repSep++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
