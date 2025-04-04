#include "main.h"

/**
 * print_hex - Prints an unsigned integer in hexadecimal format.
 * @num: The number to print.
 * @uppercase: If non-zero, print in uppercase; otherwise, print in lowercase.
 */

void print_hex(unsigned int num, int uppercase)

{
    char buffer[9]; /* Enough to hold 8 hex digits + null terminator */
    char *hex_chars = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";
    int i = 0;

    if (num == 0)
    {
        write(1, "0", 1);
        return;
    }
    while (num > 0)
    {
        buffer[i++] = hex_chars[num % 16];
        num /= 16;
    }
    while (i > 0)
    {
        write(1, &buffer[--i], 1);
    }
}

