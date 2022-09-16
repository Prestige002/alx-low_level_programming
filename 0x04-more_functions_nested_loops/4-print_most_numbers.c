#include "main.h"

/**
 * print_most_numbers - print 0 - 9 expect 2 and 4
 *
 */
void print_most_numbers(void)
{
	int j;

	for (j = 48; j <= 57; j++)
	{
	if (j != 50 && j != 52)
	{
		putchar(j);
	}
	}
	putchar('\n');
}
