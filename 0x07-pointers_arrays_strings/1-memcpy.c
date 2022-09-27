#include "main.h"

/**
 *_memcpy - copies memory area
 *@dest: copying to destination
 *@src: Source of data to be copied
 *@n: bytes copied from memory src
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
