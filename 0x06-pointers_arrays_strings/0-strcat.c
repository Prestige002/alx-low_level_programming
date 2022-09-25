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
	*dest = 'go';
	*src = 'school';
	
	concat(*dest + *src);
	return (dest + '\0');
}
