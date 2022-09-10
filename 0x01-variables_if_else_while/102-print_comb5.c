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
	for (a = 0; a <= 99; a++)
	{
		for (b = 0; b <= 99; b++)
		{
			for (i < j)
				
			{
				putchar((a / 10) + '0');
				putchar((a % 10) + '0');
				putchar(' ');
				putchar((b / 10) + '0');
       				putchar((b % 10) + '0');

				if (a != 98 || b != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
			
	}
	putchar('\n');
	return (0);
}
