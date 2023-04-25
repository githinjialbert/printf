#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct MyPrint - Data type of a format.
 * @format: Format.
 * @func: Function.
 */

typedef struct MyPrint
{
char *format;
void (*func)(va_list);
} MyPrint;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_int(va_list args);
int print_unsigned_int(va_list args);
int print_binary(va_list args);
int print_hex(va_list args);
int print_octal(va_list args);
int print_pointer(va_list args);
int print_string_hex(va_list args);
int print_reverse(va_list args);
int print_rot13(va_list args);
int validator(const char *format, va_list print1, MyPrint *ops1);

#endif
