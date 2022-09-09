#include <stdio.h>

/**
 * main - To prints quote
 *
 * Return to zero
 *
 */
int main(void)
{	int charSizes = sizeof(char);
 	int intSizes = sizeof(int);
 	int longSizes = sizeof(long int);
 	int longlongSizes = sizeof(long long int);
 	int floatSizes = sizeof(float);
 
	printf("Size of a char: %d byte(s)\n", charSizes);
	printf("Size of an int: %d byte(s)\n", intSizes);
	printf("Size of a long int: %d byte(s)\n", longSizes);
	printf("Size of a long long int: %d byte(s)\n", longlongSizes);
	printf("Size of a float: %d byte(s)\n", floatSizes);
	return (0);
}
