#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: use the % of 10
 *
 * Return: declaration
 */
int print_last_digit(int n)
{
int lastDigit;
lastDigit = n % 10;
	if (lastDigit < 0)
	{
	 lastDigit *= -1;
	 _putchar(lastDigit + '0');
	 return (lastDigit);
	}
}