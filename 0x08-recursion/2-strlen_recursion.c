#include "main.h"

/**
 *_strlen_recursion - length of a string
 *@s: pointer params
 *Return: strlen_recursion
 */
int _strlen_recursion(char *s)
{
	int str;
	
	str = 0;
	if (*s) /* if statement */
	{
		str++;
		str += _strlen_recursion(s + 1);
	}
	return (str);
}
