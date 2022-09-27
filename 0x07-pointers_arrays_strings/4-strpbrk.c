#include "main.h"
#include <stdlib.h>
/**
  *_strpbrk - searches a string for any of a set of bytes.
  *@s: pointer to string.
  *@accept: pointer to strin to be matched.
  *
  *Return: pointer to byte in s that matches one of the bytes
  *in accept or NULL if no such byte is found.
  */
char *_strpbrk(char *s, char *accept)
{
	char *p;
	int i, j;

	p = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
		}
	}
	return (p);
}
