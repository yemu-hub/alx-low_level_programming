#include <stdio.h>
/**
 * main-program entry.
 * Return: success 0.
 */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		printf("%d", number);
		number++;
	}
	printf("\n");
	return (0);
}
