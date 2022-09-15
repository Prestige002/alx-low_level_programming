#include "main.h"

/**
*_putchar - written the character c to stdout
*@c: The character to print
*
*On error, -1 is returned, and error is set appropriately.
*/
void print_alphabet(void)
{
	char i;
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
_putchar('\n');
return;
}
