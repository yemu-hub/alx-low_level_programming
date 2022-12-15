#include <stdio.h>
#include <stdlib.h>

/**
 * main - print numbers from 1-100.
 * Return: 0 up on success.
 */
int main(void)
{
	int i;
        char fz[] = "Fizz";
	char  bz[] = "Buzz";
	char fb[] = "FizzBuzz";

	for ( i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("%s", bz);
		else if ((i % 3 == 0) && (i % 5 == 0)
			printf("%s", fb);
         	else if (i % 3 == 0)
	                printf("%s", fz);
	        else if (i % 5 == 0)
                       printf("%s", bz);
                else
                       printf("%d", i);		
	}

}
