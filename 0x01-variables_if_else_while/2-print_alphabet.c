#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints the alphabet in lowercase
 * loop from a-z
 * use main function
 *
 * Return: zero
 */
int main(void)
{
	char xy;
	
	for (xy = 'a'; xy <= 'z'; xy++)
	{
		putchar(xy);
	}
	putchar('\n');
	return (0);
}
