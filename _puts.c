#include "main.h"

/**
 * _puts - prints a string to stdout.
 * @string: input string
 * Return: count of string.
 */
int _puts(char *string)
{
int counter = 0;
while (*string)
{
_putchar(*string);
string++;
counter++;
}
return (counter);
}
