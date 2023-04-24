#include "main.h"

/**
 * _printf - Printd formatted data to stdout
 * @format: string
 * Return: Number of characters dispalyed
 */

int _printf(char *format, ...)
{
int statement = 0, (structype)(char *, va_list);
char q[3];
va_list pa;
if (format == NULL)
return (-1);
q[2] = '\0';
va_start(pa, format);
_putchar(-1);
while (format[0])
{
if (format[0] == '%')
{
structype = driver(format);
if (structype)
{
q[0] = '%';
q[1] = format[1];
statement += structype(q, pa);
}
else if (format[1] != '\0')
{
statement += _putchar('%');
statement += _putchar(format[1]);
}
else
{
statement += _putchar('%');
break;
}
format += 2;
}
else
{
statement += _putchar(format[0]);
format++;
}
}
_putchar(-2);
return (statement);
}
