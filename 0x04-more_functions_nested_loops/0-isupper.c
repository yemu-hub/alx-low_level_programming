#include <main.h>
/**
 * _isupper - checks whether a charctor is uppercase.
 * @c: input parameter.
 * Return: 1 if charcter is uppercase, 0 if not.
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
