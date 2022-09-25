#include "main.h"
#include <stdlib.h>
/**
 * print_number - check the code for print number.
 * @n: is a int number
 * Return: Always 0.
 */
void print_number(int n)
{
	unsigned int = p, d, ln;

	if (n < 0)
	{
		_putchar(45);
		p = n* -1;
	}
	else
	{
		p = n;
	}
	d = p;
	ln = 1;
	
	while (d > 9)
	{
		d /= 10;
		ln *= 10;
	}
	for (; ln >= 1; ln /= 10)
	{
		_putchar(((p / ln) % 10) + 48);
	}
}
