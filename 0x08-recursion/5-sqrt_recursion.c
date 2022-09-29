#include "main.h"

/**
  *callFunction - checks if sqrt of number exists
  *@num: params
  *@pSqrt: params.
  *
  *Return: sqrt of number or -1 for error.
  */
int callFunction(int num, int pSqrt)
{
	if ((pSqrt * pSqrt) == num)
	{
		return (pSqrt);
	}
	else
	{
		if ((pSqrt * pSqrt) > num)
			return (-1);
		else
			return (callFunction(num, pSqrt + 1));

	}
}

/**
  *_sqrt_recursion - returns the natural square root of a number.
  *@n: n params.
  *
  *Return: squareroot of n.
  *-1 if n does not have a natural sqrt.
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (callFunction(n, 0));
}
