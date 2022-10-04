#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - print the put
 * @c: params
 *
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
