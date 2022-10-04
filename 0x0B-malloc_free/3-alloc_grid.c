#include <stdlib.h>

/**
 * alloc_grid -  a function that returns a pointer to a 2
 * dimensional array of integers.
 * @width: width of the array
 * @height: height of the array
 *
 * Return: Poinnter to the array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **element;

	if (width <= 0 || height <= 0)
		return (NULL);
	element = (int **)malloc(height * sizeof(int *));
	if (element == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		element[i] = malloc(width * sizeof(int));
		if (element[i] == NULL)
		{
			while (--i)
				free(element[i]);
			free(element[0]);
			free(element);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			element[i][j] = 0;
		}
	}
	return (element);
}
