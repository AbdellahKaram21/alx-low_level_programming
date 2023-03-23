#include "main.h"

/**
 * main - Entry point
 *
 * Desription: prints the first 50 fibonacci numbers
 *		starting with 0 and 1 followed by a new line
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2
		fib2 = sum

		if (count == 0)
			printf("\n");
		else
			printd(", ");
	}

	return (0);
}