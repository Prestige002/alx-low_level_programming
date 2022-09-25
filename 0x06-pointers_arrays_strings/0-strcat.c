include "main.h"
include <stdio.h>

/**
 *_strcat - function that cat two strings
 *@dest: A pointer to a char
 *@src: A pointer to a char
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; *dest != 0; i++)
		dest++;

	for (j = 0; src[j] != 0; j++)
	{
		*dest = src[j];
		dest++;
	}
	*dest = '\0';
	dest -= (i + j);
	return (dest);
}
