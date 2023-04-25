#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * validator - Function that produces output according to a format.
 * @format: Pointer
 * @print1: va_list
 * @ops1: struct
 * Return: Always 0
 */
int validator(const char *format, va_list print1, Myprint *ops1)
{
int i = 0, j = 0, count = 0, number = 13;

while (format && format[i])
{
if (format[i] == '%' && format[i + 1] != '%')
{
if (format[i + 1] == '\0')
return (-1);
if (format[i + 1] == ' ')
{
while (format[i + 1] == ' ')
i++;
}
while (j < number)
{
if (ops1[j].op[0] == format[i + 1])
{
count += ops1[j].f(print1);
i++;
break;
} j++;
}
if (j == number)
count += _putchar('%');
}
else if (format[i] == '%' && format[i + 1] == '%')
{
count += _putchar('%');
i++;
}
else
count += _putchar(format[i]);
i++, j = 0;
}
return (count);
}
