#include "main.h"

/**
 * print_hex - Print a number in hexadecimal format
 * @args: Argument list
 * @uppercase: 1 for uppercase letters, 0 for lowercase
 * Return: Number of characters printed
 */

int print_hex(va_list args, int uppercase)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[20];
	int i = 0;
	int count = 0;
	char hex;

	do {
		int digit = num % 16;

		if (digit < 10)

			hex = digit + '0';
		else
			hex = digit - 10 + (uppercase ? 'A' : 'a');
		buffer[i++] = hex;
		num /= 16;
	} while (num > 0);

	while (i--)
		count += write(1, &buffer[i], 1);

	return (count);
}

/**
 * print_pointer - Prints a pointer, an address
 * @args: Argument list, delivers the value into each function
 * Return: Number of characters printed
 */
int print_pointer(va_list args)
{
	unsigned long ptr = (unsigned long)va_arg(args, void *);
	char buffer[20];
	int i = 0;
	int count = 0;
	char hex;

	count += write(1, "0x", 2);

	if (ptr == 0)
		return (count + write(1, "0", 1));

	while (ptr)
	{
		int digit = ptr % 16;

		if (digit < 10)

			hex = digit + '0';
		else
			hex = digit - 10 + 'a';
		buffer[i++] = hex;
		ptr /= 16;
	}

	while (i--)
		count += write(1, &buffer[i], 1);

	return (count);
}
