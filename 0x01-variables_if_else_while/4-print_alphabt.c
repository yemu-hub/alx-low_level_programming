#include <stdio.h>
/**
 * main-program entry
 * Return: Success 0.
 */
int main(void)
{
	char let;

	for ( let = 'a'; let <= 'z'; let++)
	{
		if ( let != 'e' && let != 'q')
			putchar(let);

	}
	putchar ('\n');
	return (0);
}
