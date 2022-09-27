#include "main.h"

/**
 * print_chessboard - print the chessboard 2D array
 * @a: 2D array of chars
 *Return: void
 */
void print_chessboard(char (*a)[8])
{
	/*Declaring variables*/
	int i, j;

	for (i = 0; i < 8; i++) /*number repetitions*/
	{
		j = 0;
		while (j < 8)
		{
			_putchar (a[i][j]);
			j++;
		}
		_putchar ('\n'); /*print new line*/
	}
}
