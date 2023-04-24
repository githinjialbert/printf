#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
* _printf - prints formatted output to stdout
* @format: A character string
*Return: The number of characters printed
*/

int _printf(const char *format, ...)
{
va_list args;
va_start(args, format);

int num_chars_printed = 0;

for (int i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{
i++;

if (format[i] == '%')
{
putchar('%');
num_chars_printed++;
}
else if (format[i] == 'c')
{
char c = va_arg(args, int);
putchar(c);
num_chars_printed++;
}
else if (format[i] == 's')
{
char *s = va_arg(args, char *);
fputs(s,stdout);
num_chars_printed += strlen(s);
}
}
else
{
putchar(format[i]);
num_chars_printed++;
}
}
va-end(args);
return (num_char_printed);
}
