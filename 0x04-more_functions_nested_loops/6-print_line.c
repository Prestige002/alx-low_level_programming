#include "main.h"

/**
 * print_line - prints a straight line
 * @n: n is the no of time _ appear
 */

void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar(95);
		i++;
	}
	_putchar('\n');
}
