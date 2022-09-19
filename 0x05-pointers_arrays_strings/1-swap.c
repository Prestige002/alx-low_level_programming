#include "main.h"

/**
 * swap_int - swap the value of two integers
 * @swap: declare swap
 * @*a: first declare
 * @*b: second declare
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
