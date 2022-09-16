#include "main.h"

/**
 * _isupper - function that checks the uppercase character
 *@c: print the function
 *
 * Return: 1 or otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
