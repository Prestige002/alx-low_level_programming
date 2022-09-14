#include "main.h"

/**
 * print_to_98 - print all number from n - 98
 * @n: the number to be counted with comma separation
 * @n: the number printed in order
 *
 * Return: nill
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 97; n++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for (n = n; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	printf("98\n");
}
