#include "main.h"

/**
 * print_sign - print the sign of a number
 * @c: return 1 and print + if n > 0
 * Description: return 0 and print 0 if n == 0
 * finally: return -1 and print - if n < 0
 *
 * Return: 1, 0, -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('-');
		return ('/');
	}
}
