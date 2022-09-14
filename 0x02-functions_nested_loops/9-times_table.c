#include "main.h"

/**
 * times_table - print the 9 times start from 0
 * Description: loop the the digit and multiply
 *
 * Return: nill
 */
void times_table(void)
{
int num, times, product;
	for (num = 0; num < 10; num++)
	{
	_putchar('0');
		for (times = 1; times < 10; times++)
		{
			_putchar(',');
			_putchar(' ');
			product = num * times;
			if (product < 10)
			{
				 _putchar(' ');
			}
			else
			{
				_putchar((product / 10) + '0');
			}
			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
