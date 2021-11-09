#include "main.h"

/**
 * print_string - prints a string followed by a new line.
 * @s: pointer
 * Return: count
 */
int print_string(char *s)
{
	if (!s)
		return (print_string("(nil)"));
	if (*s == 0)
	{
		return (0);
	}
	else
	{
		_putchar(*s);
		return (1 + print_string(s + 1));
	}
}

/**
 * printString - print a string with a custom conversion specifie
 * @s: pointer
 * Return: count
 **/
int printString(char *s)
{
	if (!s)
		return (print_string("(nil)"));
	if (*s == 0)
	{
		return (0);
	}
	else
	{
		_putchar(*s);
		return (1 + printString(s + 1));
	}
}
