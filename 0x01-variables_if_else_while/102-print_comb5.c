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
int p, q;
for (p = 0; p <= 98; p++)
{
	for (q = p + 1; q <= 99; q++)
	{
		putchar((p / 10) + '0');
		putchar((p % 10) + '0');
		putchar(' ');
		putchar((q / 10) + '0');
		putchar((q % 10) + '0');
		if (p != 98 || q != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
}
putchar('\n');
return (0);
}
