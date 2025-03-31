#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/**
 * struct format_specifier - Links a format code, the handler function
 * @specifier: Represents the format specifier
 * @handler: Pointer to the specifier
 * _printf: _printf function
 * print_char: Prints a single character
 * print_string: Prints a string
 * print_int: Prints a signed interger, -negative or +positive
 * print_unsigned: Prints an usnigned interger
 * print_octal: Prints a number in octal (base 8)
 * print_hex: Prints a number in hexadecimal (base 16)
 * print_pointer: Prints memory address
 * @format: format string that constains the characters and specifiers
 * Return: number of characters printed
 */

typedef struct format_specifier
{
	char specifier;
	int (*handler)(va_list);
} format_specifier_t;

int _printf(const char *format, ...);

int print_char(va_list args);
int print_string(va_list args);

int print_int(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args);

int print_hex(va_list args, int uppercase);
int print_pointer(va_list args);

#endif
