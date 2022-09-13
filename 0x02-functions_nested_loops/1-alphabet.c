#include "main.h"

/**
 * main - print the alphabet in lowercase
 * Description: loop the letter
 * use void as the prototype
 *
 * Return: nill
 */
 void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
	_putchar(i);
}
_putchar('\n');
}
