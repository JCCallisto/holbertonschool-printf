#include "main.h"

/**
 * _printf3 - Custom printf function that handles the formatted output
 * of "%x" and "%X"
 * @format: The format specifier string.
 * @...: The values to format and print.
 * Return: The total number of characters printed.
 */

int _printf3(const char *format, ...)

{
	va_list args;
	int total_written = 0;
	const char *p;
	char buffer[1024];

	va_start(args, format);

	for (p = format; *p != '\0'; p++)
	{
		if (*p == '%')
		{
			p++;
			switch (*p)
			{
				case 'x':
					{
					unsigned int x = va_arg(args, unsigned int);

					print_hex(x, 0);
					total_written += snprintf(buffer, sizeof(buffer), "%x", x);
					break;
					}
				case 'X':
					{
					unsigned int X = va_arg(args, unsigned int);

					print_hex(X, 1);
					total_written += snprintf(buffer, sizeof(buffer), "%X", X);
					break;
					}
			}
		}
		else
		{
			write(1, p, 1);
			total_written++;
		}
	}
	va_end(args);
	return (total_written++);
}

