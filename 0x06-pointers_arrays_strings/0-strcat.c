include "main.h"
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

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
	j++;
	i++;
	}
	dest[i] = '\0';
	dest -=(i + j);
	return (dest);
}
