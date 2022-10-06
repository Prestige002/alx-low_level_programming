#include "main.h"

/**
 * malloc_checked - allocates memmory using malloc
 * @b: params to allocate
 *
 * Return: nill
 */
void *malloc_checked(unsigned int b)
{
	int *mem;

	mem = malloc(sizeof(b));
	if (mem == NULL)
		exit(98);
	return (mem);
}
