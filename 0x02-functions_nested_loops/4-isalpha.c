#include "main.h"

/**
 * _isalpha - print the alphabet both uppercase and lowercase
 * Description: print lower or upper case
 * @c: loop through the lower and uppercase
 *
 * Result: 1
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
	return (1);
}
else
{
	return (0);
}
}
