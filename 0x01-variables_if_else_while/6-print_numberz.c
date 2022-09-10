#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print all single digit number of base 10
 * starting from 0
 * followed by new line
 *
 * Return: zero
 */
int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
