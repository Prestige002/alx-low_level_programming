#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the alphabet
 * except q and e
 * putchar to print
 *
 * Return: zero
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; apha++)
	{
	if (alpha != 'e' && alpha != 'q')
	{
		putchar(alpha);
	}
	}
putchar('\n');
return (0);
}
