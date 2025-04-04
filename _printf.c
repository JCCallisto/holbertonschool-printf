#include "main.h"

/**
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
}
