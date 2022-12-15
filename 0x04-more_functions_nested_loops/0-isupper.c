#include <main.h>
/**
 * _isppuer - checks whether a charctor is uppercase.
 * @c: input parameter.
 * Return: 1 if charcter is uppercase, 0 if not.
 */
int _isupper(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return(0);
	}
	else
	{
		return(1);
	}
}
