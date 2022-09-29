#include "main.h"

/**
 * _pow_recursion - returns the value of x to the power of y.
 * @x: params (number)
 * @y: params (power)
 *
 * Return: x to the pow of y.
 * -1 if x < 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
