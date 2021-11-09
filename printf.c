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
		case 'd':
			return (print_int(va_arg(*list, int)));
		case 'i':
			return (print_int(va_arg(*list, int)));
		case '%':
			return (_putchar('%'));
		case 'b':
			return (int_to_bin(va_arg(*list, int)));
		case 'u':
			return (print_uint(va_arg(*list, unsigned int)));
		case 'o':
			return (print_octal(va_arg(*list, int)));
		case 'x':
			return (print_lowhex(va_arg(*list, int)));
		case 'X':
			return (print_uphex(va_arg(*list, int)));
		case 'r':
			return (print_reverse(va_arg(*list, int)));
		case 'R':
			return (print_rot13(va_arg(*list, int)));
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
