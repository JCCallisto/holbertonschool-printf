#include "main.h"

/**
 * _printf1 - Custom printf function that prints the formatted output.
 * @format: The Format specifier strings.
 * @... : The values to format and print.
 * Return: Amount of words written.
 */

int _printf1(const char *format, ...)

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
				case 'd':
				{
				int num = va_arg(args, int);
				char buffer[50];
				int len = snprintf(buffer, sizeof(buffer), "%d", num);

				total_written += write(1, buffer, len);
				break;
				}
				case 'S':
				{
				wchar_t *wstr = va_arg(args, wchar_t*);

				if (wstr == NULL)
				{
					wstr = L"(null)";
				}
				total_written += write(1, wstr, wcslen(wstr) * sizeof(wchar_t));

				break;
				}
			}
		}
	}
	va_end(args);
	return (total_written++);
}
