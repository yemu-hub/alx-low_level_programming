#include <stdio.h>
/**
 * main-entry int the program.
 * Return: success 0.
 */
int main(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
		putchar(let);
	for (let = 'A'; let <= 'z'; let++)
		putchar(let);
	putchar ('\n');
	
	return (0);
}
