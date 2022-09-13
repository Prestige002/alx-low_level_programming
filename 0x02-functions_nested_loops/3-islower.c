#include "main.h"

/**
* _islower - print a function if lowercase
* Description: loop from a to z
* print if its lowercase
*
* Return: 1 or 0
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
