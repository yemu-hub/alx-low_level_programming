#include <stdio.h>
#include <math.h>

/**
 * main - print the largest prime factor
 * Return: always 0 upon sucess.
 */
int main(void)
{
	long num1, num2;
        num1 = 612852475143;
	
	for (num2 = 2; num1 >= num2; num2++)
	{
		while ( num1 % num2 == 0)
		{
	        	num1 = num1 / num2;
		}
	}
	printf("%1u\n", num2);
	putchar('\n');
	return (0);
}
