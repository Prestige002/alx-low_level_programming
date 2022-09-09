#include <stdio.h>

/**
 * main - To prints quote
 *
 * Return to zero
 *
 */
int main(void)
{
	int floatSize = sizeof(float);
	int longlongSize = sizeof(long long int);
	int longSize = sizeof(long int);
	int intSize = sizeof(int);
	int charSize = sizeof(char);
	
	printf("Size of a float: %d byte(s)\n", floatSize);
	printf("Size of a long long int: %d byte(s)\n", longlongSize);
	printf("Size of a long int: %d byte(s)\n", longSize);
	printf("Size of an int: %d byte(s)\n", intSize);
	printf("Size of a char: %d byte(s)\n", charSize);
	return (0);
}
