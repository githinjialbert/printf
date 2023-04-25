#include <stdio.h>
#include "main.h"
#include <stdarg.h>

/**
 * op_SString - prints a string to output
 * @form: list to retrieve string to print
 *
 * Return: number of characters
 */
int op_SString(va_list form)
{
int count = 0, i = 0, divide, module;
char ascii;
char *str = va_arg(form, char *);

if (str == NULL)
str = "(null)";
ascii = str[i];

while (ascii != '\0')
{
if ((ascii > 0 && ascii < 32) || ascii >= 127)
{
count += _putchar('\\');
count += _putchar('x');
divide = ascii / 16;
module = ascii % 16;
if (divide > 9)
count += _putchar(divide + 55);
else
count += _putchar(divide + '0');
if (module > 9)
count += _putchar(module + 55);
else
count += _putchar(module + '0');
}
else
count += _putchar(str[i]);
i++;
ascii = str[i];
}
return (count);
}
