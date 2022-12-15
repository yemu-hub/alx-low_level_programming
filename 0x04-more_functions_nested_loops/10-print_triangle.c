#include "main.h"

/**
 * print_triangle - print triangle
 * @size: sets the size of the triangle
 * Return: no return
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = size; i > 0; i--)
		{
			for (j =1; j <= size; j++)
			{
				if (j >= i)
					_putchar('#');
				else
					_putchar(' ');

			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
