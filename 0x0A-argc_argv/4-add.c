#include <stdio.h>
#include <unistd.h>

int atoi(const char *nptr);
/**
 * main - adding of positive numbers
 * @argc: params
 * @argv: params
 *
 * Return: 0 if no number passed
 * 1 if one number contain symbol
 */
int main(int argc, char *argv[])
{
	int i, j, k, sum;
	
	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}

	}
	for (k = 0; k < argc; k++)
	{
		sum += atoi(argv[k]);
	}
	printf("%d\n", sum);
	return (0);
}
