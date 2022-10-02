#include <stdio.h>

/**
 * main - prints its name
 * @argc: params
 * @argv: string variable params
 *
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
