#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet in lowercase
 * Description: loop 10 times
 * followed by new line
 *
 * Return: nill
 */
void print_alphabet_x10(void)
{
int k;
char charName;
	for (k = 0; k <= 9; k++)
	{
		for (charName = 'a'; charName <= 'z'; charName++)
		{
			_putchar(charName);
		}
		_putchar('\n');
	}
}
