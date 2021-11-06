#include "main.h"
#include <stdio.h>

int _printf(const char *format, ...)
{
	int p, out = 0, flag = 0;

	for (p = 0; format[p]; p++)
	{
		out += _putchar(format[p]);
		if (flag)
			printf("\nfound %c\n", format[p]);
		if (format[p] == '%')
			flag = 1;
		else
			flag = 0;
	}
	return (out);
}
