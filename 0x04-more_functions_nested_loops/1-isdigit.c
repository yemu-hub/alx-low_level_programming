#include "main.h"
/**
 * _isdigit- checks for a value 0-9.
 * @c: input value.
 * Return: 1 if it is digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return(1);
	else
		return(0);
}

