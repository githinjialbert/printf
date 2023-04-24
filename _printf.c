#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
* _printf - prints formatted output to stdout
* @format: A character string
*Return: The number of characters printed
*/

int _printf(const char *format, ...)
{
int num_chars_printed = 0;
int i;
va_list args;
va_start(args, format);
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{
i++;
switch (format[i])
{
case 'c':
{
char c = va_arg(args, int);
putchar(c);
num_chars_printed++;
break;
}
case 's':
{
char *s = va_arg(args, char*);
num_chars_printed += strlen(s);
fputs(s, stdout);
break;
}
case '%':
{
putchar('%');
num_chars_printed++;
break;
}
}
}
else
{
putchar(format[i]);
num_chars_printed++;
}
}
va_end(args);
return (num_chars_printed);
}
