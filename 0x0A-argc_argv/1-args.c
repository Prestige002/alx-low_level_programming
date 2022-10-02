#include <stdio.h>
#include <unistd.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: params int
 * @argv: params
 *
 * Return 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
