#include "main.h"

/**
 * more_numbers - prints 10 times the numbes form 0-14
 * _putchar only three times
 * Return: 0 to 14 %10 followed by new line
 */
void more_numbers(void)
{
	int i;
	int rep;

	for (rep = 0; rep < 10; rep++)
	{
		for ( i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
