#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print all posible combinations of single-digit
 * separated by ,
 * Description: should be printed in ascending order
 * print through putchar
 *
 * Return:zero
 */
int main(void)
{
int c = 0;
	while (c < 10)
	{
		putchar(48 + c);
	if (c != 9)
	{
		putchar(',');
		putchar(' ');
	}
	c++;
	}
	putchar('\n');
	return (0);
}
