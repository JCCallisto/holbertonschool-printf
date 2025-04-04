#include "main.h"

/**
 * _printf - custom printf function
 * @format: string to print with specifiers
 *
 * Description: Handles %c, %s and %%, and %o
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int count = 0;

	if (format == NULL || (format[0] == '%' && !format[1]))
	{
		return (-1);
	}

	va_start(args, format);

	while (format && format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			switch (format[i])
			{
				case 'c':
					count += print_char(args);
					break;
				case 's':
					count += print_string(args);
					break;
				case 'd':
				case 'i':
					count += print_int(args);
					break;
				case 'u':
					count += print_unsigned(args);
					break;
				case 'o':
					count += print_octal(args);
					break;
				case 'x':
					count += print_hex(args, 0);
					break;
				case 'X':
					count += print_hex(args, 1);
					break;
				case 'p':
					count += print_pointer(args);
					break;
				case '%':
					count += write(1, "%", 1);
					break;
				default:
					write(1, "%", 1);
					write(1, &format[i], 1);
					count += 2;
					break;
			}
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}

	va_end(args);
	return (count);
}
