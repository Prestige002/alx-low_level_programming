#include "main.h"

/**
* _islower - print a function of a lowercase
* Description: loop from a to z
* @c: print if its lowercase
*
* Return: 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
