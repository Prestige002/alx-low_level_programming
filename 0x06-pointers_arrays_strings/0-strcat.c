include "main.h"
include <string.h>

/**
 *_strcat - function that cat two strings
 *@dest: A pointer to a char
 *@src: A pointer to a char
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{	int i, j;

	i = 0;
 	j = 0;
	
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
		i++
	}
	dest[i] = '\0';

	return (dest);
}
