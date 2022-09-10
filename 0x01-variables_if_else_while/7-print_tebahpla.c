#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print the lowercase alphabet in reverse
 * followed by new line
 * putchar to prin
 *
 * Return: zero
 */
int main(void)
{
	char alpha = 'z';
	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
