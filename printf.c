#include "main.h"
#include <stdio.h>

/**
 * select_f - a
 * @c: a
 * @list: a
 * Return: a
 */
int select_f(char c, va_list *list)
{
	switch (c)
	{
		case 'c':
			return (_putchar(va_arg(*list, int)));
		case 's':
			return (print_string(va_arg(*list, char *)));
		case 'i':
			return (print_int(va_arg(*list, int)));
		case '%':
			return (_putchar('%'));
	}
	return (0);
}
/**
 * _printf - printf
 * @format: string
 * Return: int
 **/
int _printf(const char *format, ...)
{
	int p, out = 0, flag = 0;
	va_list list;

	va_start(list, format);
	for (p = 0; format[p]; p++)
	{
		if (flag)
		{
			out += select_f(format[p], &list);
			flag = 0;
		}
		else
		{
			if (format[p] == '%')
			{
				flag = 1;
				continue;
			}
			out += _putchar(format[p]);
		}
	}
	va_end(list);
	return (out);
}
