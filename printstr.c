#include "main.h"
#include "stdio.h"

/**
 * printstr- print str.
 * @pa: gtgtg
 * @format: format str.
 * Return: number str for print.
 */
int printstr(char *format, va_list pa)
{
	char *str = va_arg(pa, char *);
	int string;
	(void)format;

	if (str == NULL)
		str = "(null)";
	string = _puts(str);
	return (string);
}
