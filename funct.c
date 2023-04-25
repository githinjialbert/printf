#include <stdio.h>
#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * op_string - Print Integer
 * @form: name va_list
 *
 * Return: Nothing.
 */

int op_string(va_list form)
{
int length_s;
char *str = va_arg(form, char *);

if (str == NULL)
{
str = "(null)";
}
length_s = 0;
while (str[length_s])
{
length_s += _putchar(str[length_s]);
}
return (length_s);
}

/**
 * op_reverse - print character
 * @form: name of va_list
 *
 * Return: Nothing.
 */
int  op_reverse(va_list form)
{
int i = 0, length_r = 0;
char *str = va_arg(form, char *);

while (str[i] != '\0')
{
i++;
}
length_r = i;
i--;
while (i >= 0)
{
_putchar(str[i]);
i--;
}
return (length_r);
}

/**
 * op_character - print character
 * @form: name of va_list
 *
 * Return: Nothing.
 */

int op_character(va_list form)
{
int length_c = 0;
length_c = _putchar(va_arg(form, int));
return (length_c);
}


/**
 * op_integer - print integer numbers
 * @form: name of va_list
 *
 * Return: Nothing.
 */

int op_integer(va_list form)
{
int integer = va_arg(form, int);
int divide = 1;
int length_i = 0;
unsigned int number;

if (integer < 0)
{
length_i += _putchar('-');
number = integer * -1;
}
else
number = integer;

while (number / divide > 9)
divide *= 10;

while (divide != 0)
{
length_i += _putchar('0' + number / divide);
number %= divide;
divide /= 10;
}

return (length_i);
}

/**
 * _putchar - prints given character
 * @c: character to print.
 *
 * Return: number of characters printed, -1 if error
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
