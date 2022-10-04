#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr -concatenates all the arguments of your program
 * @ac: first argument passed
 * @av: double pointer array
 *
 * Return: NULL or 0
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, index = 0, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			size++;
	}
	str = malloc(sizeof(str*) * size + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[index++] = av[i][j];
		str[index++] = '\n';
	}
	str[size] = '\0';
	return (str);
}
