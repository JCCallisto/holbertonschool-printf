#include "main.h"

/**
 * _printf2 - Custom printf function that handles the formatted output
 * of "%o" and "%u"
 * @format: The format specifier string.
 * @...: The values to format and print.
 * Return: The total number of characters printed.
 */

int _printf2(const char *format, ...)

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
				case 'u':
					{
					unsigned int u = va_arg(args, unsigned int);
					char buffer[50];
					int len = snprintf(buffer, sizeof(buffer), "%u", u);

					total_written += write(1, buffer, len);
					break;
					}
				case 'o':
					{
					unsigned int o = va_arg(args, unsigned int);
					char buffer[50];
					int len = snprintf(buffer, sizeof(buffer), "%o", o);

					total_written += write(1, buffer, len);
					break;
					}
			}
		}
	}
	va_end(args);
	return (total_written++);
}
