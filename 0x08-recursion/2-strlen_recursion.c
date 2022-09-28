#include "main.h"

/**
 *_strlen_recursion - length of a string
 *@s: pointer params
 *Return: strlen_recursion
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0') /* if statement */
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1)); /*Sum 1*/
	}
}

