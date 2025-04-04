#include "main.h"

/**
<<<<<<< HEAD
 * _printf - Custom printf function that prints the formatted output.
 * @format: The Format specifier strings.
 * @... : The values to format and print.
 * Return: Amount of words written.
 */

int _printf(const char *format, ...)

{
	va_list args;
	int total_written = 0;
	const char *p;

	va_start(args, format);
	for (p = format; *p != '\0'; p++)
	{
		if (*p == '%')
		{
			p++;

			switch (*p)
			{
				case 's':
				{
				char *s = va_arg(args, char*);
				 total_written += write(1, s, strlen(s));
				break;
				}
				case 'c':
				{
				int c = va_arg(args, int);
				 total_written += write(1, &c, 1);
				break;
				}
			{
			default:
		total_written += write(1, "%", 1);
			total_written += write(1, p, 1);
			break;
			}
		}
		}
	else
	{
		write(1, p, 1);
	}
}
	va_end(args);
	return (total_written++);
=======
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
>>>>>>> 76506c3a994ab86e92f6c38a4623614093a40c08
}
