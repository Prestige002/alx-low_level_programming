#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print combination of two digit
 * separated be , and different digit
 * Description: print smallest combo of two digits
 * printed in ascending order
 * print through putchar
 *
 * Return: zero
 */
int main(void)
{
int x;
int y = 0;
	while (y < 10)
	{
		x = 0;
	while (x < 10)
	{
	if (y != x && y < x)
	{
		putchar('0' + y);
		putchar('0' + x);
	if (x + y != 17)
	{
		putchar(',');
		putchar(' ');
	}
	}
	x++
	}
	y++
	}
	putchar('\n');
	return (0);
}

