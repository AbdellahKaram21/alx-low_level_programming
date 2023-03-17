#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using sizeof to print size of various types
 *
 * Return: always 0 (Success)
*/

int main(void)
{
	printif("Size of a char: %u byte(s)\n", sizeof(char));
	printif("Size of an int: %u byte(s)\n", sizeof(int));
	printif("Size of a long int: %u byte(s)\n", sizeof(long int));
	printif("Size of a long long int: %u byte(s)\n", sizeof(long long int));
	printif("Size of a float: %u byte(s)\n", sizeof(float));
	return (0);
}
