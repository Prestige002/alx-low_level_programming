#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print two two digit number
 * Description: ranges from 0 - 99
 * separated by space
 * use putchar
 *
 * Return: 0
 */
int main(void)
{
int a, b;
	for (a = 0; a <= 98; a++)
	{
	putchar((a / 10) + '0');
	putchar((a % 10) + '0');
	putchar(' ');
	putchar((b / 10) + '0');
       	putchar((b % 10) + '0');

	if (a == 98 && b == 99)
	continue;
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
