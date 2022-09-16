#include <unistd.h>

/**
*_putchar - written the character c to stdout
*@c: The character to print
*
*On error, -1 is returned, and error is set appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
