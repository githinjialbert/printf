#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * op_hex - prints hex number
 * @form: number of list
 * Return: number of characters
 */
int op_hex(va_list form)
{
int count = 0, i = 0;
unsigned int num = va_arg(form, unsigned int);
int hex[sizeof(int) * 8 + 1];


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



/**
 * op_HEX - prints hex from printf
 * @form: number variatic list
 * Return: number of characters
 */
int op_HEX(va_list form)
{
int count = 0, i = 0;
unsigned int num = va_arg(form, unsigned int);
int hex[sizeof(int) * 8 + 1];

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
_putchar(hex[i] + 55);
count++, i--;
}
return (count);
}
