#include "main.h"

/**
 * print_int - prints a signed interger
 * @args: argument list
 * Return: number of characters printed
 */

int print_int(va_list args)
{
	int n = va_arg(args, int);
	unsigned int num;
	char buffer[12];
	int i = 0;
	int count = 0;

	if (n < 0)
	{
		count += write(1, "-", 1);
		num = (unsigned int)(-n);
	}
	else
	{
		num = (unsigned int)n;
	}
	
	do {
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	} while (num);

	while (i--)
		count += write(1, &buffer[i], 1);
	
	return (count);
}
/**
 * print_unsigned - prints unsigned interger
 * @agrs: argument list
 * Return: number of characters printed
 */
int print_unsigned(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[20];
	int i = 0;
	int count = 0;

	do { 
		buffer[i++] = (num % 10) + '0';
		num /= 10;

	} while (num > 0);

	while (i--)
		count += write(1, &buffer[i], 1);

	return (count);
}

/**
 * print_octal - prints an unsigned interger in octal
 * @args: argument list
 * Return: number of the character printed
 */

int print_octal(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[20];
	int i = 0;
	int count = 0;

	do {
		buffer[i++] = (num % 8) + '0';
		num /= 8;
	} while (num > 0);

	while (i--)
		count += write(1, &buffer[i], 1);

	return (count);

}
