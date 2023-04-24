#include <unistd.h>

/**
 * _putchar - print char with stdout
 * @ch: char to print
 * Return: Output.
 */
int _putchar(char ch)
{
static int counter;
static char buffer[1024];
if (ch == -1)
{
counter = 0;
return (0);
}
if (ch == -2 || counter == 1024)
{
write(1, buffer, counter);
counter = 0;
}
if (ch != -1 && ch != -2)
{
buffer[counter] = ch;
counter++;
return (1);
}
return (0);
}
