#include "main.h"

/**
 * malloc_checked - allocates memmory using malloc
 * @b: params to allocate
 *
 * Return: nill
 */
void *malloc_checked(unsigned int b)
{
	int *mem, i;

	mem = malloc(sizeof(b) * length);
	if (mem == NULL)
		exit (98);
	for (i = 0; i < b; i++)
		mem[i] = b[i];
	return (mem);
}
