#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints alphabet
 * @void: Empty parameter in the main
 * Description: Prints the lowercase and uppercase alphabet
 * use only putchar
 *
 * Return: zero
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	alpha = 'A';
	while (alpha <= 'Z')
	{
		putchar(alpha);
		alpha++
	}
	putchar('\n');
	return (0);

}

