#include "main.h"

/**
 * print_char - Prints a single character
 * @args - Argument list
 * Return: number of characters printed (1)
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);
	return (write(1, &c, 1));
}

/**
 * print_string - Prints a string
 * @args: Argument list
 * Return: Number of characters printed
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (!str)
		str = "(null)";

	while (*str)
	{
		write(1, str++, 1);
		count++;
	}

	return (count);
}
