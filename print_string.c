#include "main.h"

/**
 * print_string - prints a string followed by a new line.
 * @s: pointer
 * Return: 0
 */
int print_string(char *s)
{
	if (!s)
		return(print_string("(nil)"))
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
