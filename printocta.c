#include "main.h"
/**
 * printocta - prints a hexadecimal
 * @format: format to print hexadecimal
 * @pa: list that contains the hexadecimal
 * Return: number.
 */
int printocta(char *format, va_list pa)
{
unsigned int num = va_arg(pa, unsigned int);
unsigned int imitate;
char *octa;
int i, i2 = 0, contain = 0;
(void)format;
if (num == 0)
return (_putchar('0'));
for (imitate = num; imitate != 0; i2++)
{
imitate = imitate / 8;
}
octa = malloc(i2);
if (!octa)
return (-1);
for (i = i2 - 1; i >= 0; i--)
{
octa[i] = num % 8 + '0';
num = num / 8;
}
for (i = 0; i < i2 && octa[i] == '0'; i++);
for (; i < i2; i++)
{
_putchar(octa[i]);
contain++;
}
free(octa);
return (contain);
}
