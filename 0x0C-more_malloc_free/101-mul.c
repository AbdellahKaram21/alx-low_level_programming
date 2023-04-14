#include "main.h"

/**
 * print_str -> prints string
 * @str: string
 */

void print_str(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}

/**
 * str_to_int -> converts string to int
 * @str: string
 * Return: int
 */

int str_to_int(char *str)
{
	unsigned long int sign = 1, num = 0;

	if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	while (*str != '\0')
	{
		num = (num * 10) + (*str - '0');
		str++;
	}
	return (num * sign);
}

/**
 * print_int -> prints integer
 * @num: integer
 */

void print_int(unsigned long int num)
{
	if (num / 10 != 0)
		print_int(num / 10);
	if (num < 0 && num / 10 == 0)
		_putchar('-');
	_putchar(((num < 0 ? num * -1 : num) % 10) + '0');
}

/**
 * main -> prints product of two integers
 * @argc: number of arguments
 * @argv: arguments
 * Return: product
 */

int main(int argc, char *argv[])
{
	unsigned long int i, j, num1, num2;

	if (argc != 3)
	{
		print_str("Error");
		_putchar('\n');
		return (98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(argv[i][j] - '0' >= 0 && argv[i][j] - '0' <= 9))
			{
				print_str("Error");
				print_str("here");
				_putchar('\n');
				return (98);
			}
		}
	}
	num1 = str_to_int(argv[1]);
	num2 = str_to_int(argv[2]);
	print_int(num1 * num2);
	_putchar('\n');
	return (0);
}
