#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - printf function
 * @format: format string that constains the characters and specifiers
 *
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(void);

int print_int(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args);


#endif
