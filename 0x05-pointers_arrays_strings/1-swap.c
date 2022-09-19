#include "main.h"

/**
 * swap_int - swap the value of two integers
 * @ch: declare swap
 * @a: first declare
 * @b: second declare
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
