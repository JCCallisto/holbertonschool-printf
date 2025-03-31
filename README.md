Printf - project 2025

ABOUT this project:

  This is costum version of the C printf function, built following the allowed tools for it's functionalities, no shorcuts, no stdio library, just write(), va_list etc.
It supports:

      → %c            single character

      → %s            strings

      → %d & %i       signed numbers

      → %u            unsigned numbers

      → %o            octal

      → %x & %X       hex (lower and UPPER case)

      → %p            pointers

      → %%            prints percent sign


          Example of this: 

  -printf("Score: %d%% | Name: %s\n", 95, "Gerald");

          Prints: 

                      Score: 95% | Name: Gerald
DESCRIPTION:

-- The files present work together through main.h file (#include "main.h"). The prinf.c file reads the text and looks for anything that starts with % (specifier). Using switch and case control structure the program decides how to handle each different format specifiers. It works like a branching system that checks format type and calls a function to handle it nd prints to the screen.

CONCLUSION:

       → This project helped me understand how `printf` works behind the scenes, i Built my own version called `my_printf` using basic tools like `write` and `va_list`, without relying on the standard library.
Along the way, i learned how to handle different format types like %d, %s, %c, and also deal with special cases like NULL values or unknown formats.

In the end, it gave me a solid practice with C, debugging, and breaking down big problems into smaller pieces and how to disect meanings to acquire visual knowledge on how they work.
