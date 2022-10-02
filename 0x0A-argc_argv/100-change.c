#include <stdio.h>
#include <unistd.h>


int atoi(const char *nptr);
/**
 * main - print the min number of coins
 * to make change for an amount of money
 * @argc: params
 * @argv: params
 *
 * Return: 0 for success && 1 for error
 */
int main(int argc, char *argv[])
{
	int num, i, result;
	int coins[] = {25, 10, 5, 2,1};

	result = 0;
	if (argc == 1)
	{
		printf("%s\n", "Error");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= coins[i])
		{
			num -= coins[i];
			result++;
		}
	}
	printf("%d\n", result);
	return (0);
}
