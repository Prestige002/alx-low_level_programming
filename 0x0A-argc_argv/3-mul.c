#include <stdio.h>
#include <unistd.h>

int atoi(const char *nptr);
/**
 * main - multiplies two number
 * @argc: params
 * @argv: params
 *
 * Return: 1
 */
int main(int argc, char *argv[])
{
	int i, num1 = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
		num1 = num1 * atoi(argv[i]);
		}
		printf("%d\n", num1);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);

}
