#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
*_printf - produces output
*@format: pointer
*Return: always 0
*/
int _printf(const char *format, ...)
{
	va_list(print);
	int count = 0;
	Myprint ops[] = {
		{"c", op_character},
		{"s", op_string},
		{"i", op_integer},
		{"d", op_integer},
		{"r", op_reverse},
		{"R", op_rot13},
		{"b", op_binary},
		{"o", op_octal},
		{"u", op_unsigned_decimal},
		{"x", op_hex},
		{"X", op_HEX},
		{"S", op_SString},
		{"p", op_address},
	};
	if (format == NULL)
		return (-1);
	va_start(print, format);
	count = validator(format, print, ops);
	va_end(print);
	return (count);
}
