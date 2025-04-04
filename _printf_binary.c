#include "main.h"

/**
 * print_binary - Custom printf function that prints in "%b" format.
 * @n: The unsigned int to be printed in binary.
 */

void print_binary(unsigned int n)

{
	int i;
	int started = 0;

	for (i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		switch ((n >> i) & 1)
		{
		case 1:
		putchar('1');
		started = 1;
		break;
		case 0:
		if (started)
		{
			putchar('0');
		}
		break;
		}
	}
	if (!started)
	{
		putchar('0');
	}
}
