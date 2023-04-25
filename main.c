#include "main.h"
/**
*main - main function
*Return: always 0
*/
int main(void)
{
	_printf("Hello, world!\n");
	_printf("The answer is %d\n", 42);
	_printf("The value of pi is approximately %f\n", 3.14259);
	_printf("The binary representation of %d is %b\n", 42, 42);
	_printf("The hexadecimal representation of %d is %x\n", 42, 42);
	_printf("The octal representation of %d id %o\n", 42, 42);
	_printf("The address of the variable is %p\n", &main);
	_printf("The string is %S\n", "Hello\tworld!\n");
	_printf("The string reversed is %r\n", "Hello, world!");
	_printf("The rot13 of the string is %R\n", "Hello, world!");
	return (0);
}
