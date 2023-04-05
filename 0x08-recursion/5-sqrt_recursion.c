#include "main.h"
#include <stdio.h>


/**
 * checker - checks the input number from n to the base
 * @n: The number to return the square root of.
 * @base: base number to check
 * Return: If the number has a natural square root - the square root.
 *         If the number does not have a natural square root - -1.
 */
int checker(int n, int base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);
	return (checker(n + 1, base));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
 *
 * Return: If n has a natural square root - the natural square root of n.
 *		If n does not have a natural square root - -1
*/

int _sqrt_recursion(int n)
{
	return (checker(1, n));
}
