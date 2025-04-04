#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <wchar.h>

typedef void (*callback)(int);

typedef struct
{
        char *s;
        int c;
        int num;
        unsigned int x;
        unsigned int X;
        unsigned int o;
        unsigned int u;
        wchar_t *wstr;
        callback cb;
}My_specifier;

int _putchar(char c);
int _printf(const char *format, ...);
int _printf1(const char *format, ...);
int _printf2(const char *format, ...);
int _printf3(const char *format, ...);
void print_hex(unsigned int num, int uppercase);
void my_callback(int value);
void print_my_specifier(My_specifier *specifier);
void print_binary(unsigned int n);

#endif
