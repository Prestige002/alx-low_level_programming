#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - print number base 16 in lowercase
 * follow by a new line
 * print through putchar
 *
 * Return: zero
 */
int main(void)
{
char k;
	for (k = '0'; k <= '9'; k++)
	{
		putchar(k);
	}
	for (k = 'a'; k <= 'f'; k++)
	{
		putchar(k);
	}
	putchar('\n');
	return (0);
}

