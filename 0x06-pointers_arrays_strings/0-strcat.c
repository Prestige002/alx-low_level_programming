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
zzint i, j;

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

return (dest);
}