#include <stdio.h>
/**
 * main-entry pont.
 * Retrun: success 0.
 */
int main(void)
{
	char let;

	for (let = 'z'; let >= 'a'; let--)
		putchar(let);
	putchar('\n');
	return (0);
}

