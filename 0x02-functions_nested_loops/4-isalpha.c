#include "main.h"

/**
 * _isalpha - return the alphabet
 * Description: both uppercase and lowercase
 * @c: loop through the lower and uppercase
 *
 * Result: one or zero if the letter is lower or uppercase
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
