#include <stdio.h>
/**
 * main-program entry.
 * Return: success 0.
 */
int main(void)
{
	char let;
	for (let ='a'; let<='z'; let++)
		putchar(let);
	putchar('\n');

	return(0);
}
