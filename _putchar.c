#include <unistd.h>


/**
 * _putchar - writes the character to stdout
 * @c: The Character to print
 * Return: On success 1.
 * On Error, -1 is returned, and errno se appropriately
 */

int _putchar(char c)

{

        return (write(1, &c, 1));

}
