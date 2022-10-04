#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: dest params
 * @s2: src params
 *
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	int l1, l2, i;
	char *str;

	l1 = strlen(s1);
	l2 = strlen(s2);
	str = malloc(sizeof(*str) + l1 + l2);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l1; i++)
	{
		str[i] = s1[i];
		str[l1 + i] = s2[i];
	}
	return (str);
}
