#include <stdio.h>
#include <math.h>

/**
 * main - print the largest prime factor
 * Return: always 0 upon sucess.
 */
int main(void)
{
	long num, maxNum;
        long number = 612852475143;
	double square = sqrt(number);

	for (num = 1; num <= square; num++)
	{
		if ( number % num == 0)
		{
			maxNum = number / num;
		}
	}
	printf("%1d\n", maxNum);

	return (0);
}
