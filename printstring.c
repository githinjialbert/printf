#include "main.h"

/**
 * printstr- print str.
 * @pa: gtgtg
 * @format: format str.
 * Return: number str for print.
 */
int printstr(char *format, va_list pa)
{
char *string = va_arg(pa, char *);
int commit;
(void)format;
if (string == NULL)
string = "(null)";
commit = _puts(string);
return (commit);
}
