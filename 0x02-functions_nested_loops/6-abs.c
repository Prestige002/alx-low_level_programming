#include "main.h"

/**
 * _abs - print the abs value of an integer
 * @n: loop through if statement
 *
 * Return: 0
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n * (-1));
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
	return (n);
	}
}
