#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print comb of three digit
 * Description: use comma to separeate
 * 3 digit be differnt
 * print the smallest
 * on ascending order with 3-digit
 * print through putchar
 * putchar should be used 6times
 *
 * Return: zero
 */
int main(void)
{
int c;
int d;
int e = 0;
	while (e < 10)
	{
	d = 0;
	while (e < 10)
	{
	c = 0;
	while (c < 10)
	{
	if (c != d && d != e && e < d && d < c)
	{
		putchar('0' + e);
		putchar('0' + d);
		putchar('0' + c);
	if (c + d + e != 9 + 8 + 7)
	{
		putchar(',');
		putchar(' ');
	}
	}
	c++;
	}
	d++;
	}
	e++;
	}
	putchar('\n');
	return (0);
}
