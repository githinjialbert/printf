#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

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

#endif
