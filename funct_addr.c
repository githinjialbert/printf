#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * op_address - Print address
 * @form: list of arguments passed to printf
 * Return: NUmber of characters
 */
int op_address(va_list form)
{
void *addr;
unsigned long int num, count = 0;
int  i = 0;
char hex[sizeof(int) * 8 + 1];
char *str = "(nil)";

addr = va_arg(form, void *);
num = (unsigned long int)addr;
if (!num)
{
while (str[count])
count += _putchar(str[count]);
return (count);
}
count += _putchar('0');
count += _putchar('x');
while (num >= 16)
{
hex[i] = num % 16;
num /= 16;
i++;
}
hex[i] = num;
while (i >= 0)
{
if ((hex[i] <= 9) && (hex[i] >= 0))
_putchar(hex[i] + '0');
else
_putchar(hex[i] + 87);
count++, i--;
}
return (count);
}
