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

	i = 0;
	
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
	}
	dest[src + i] = '\0';

	return (dest);
}
