#include "main.h"

/**
 * print_string - prints a string followed by a new line.
 * @s: pointer
 * Return: count
 */
int print_string(char *s)
{
	if (!s)
		return (print_string("(null)"));
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
		return (print_string("(null)"));
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

/**
 * print_rot13 - prints rot13
 * @s: string
 * Return: s
 **/
int print_rot13(char *s)
{
	int cont = 0;
	char z;

	if (!s)
		return (-1);
	if (*s == 0)
		return (0);
		else if (*s >= 'A' && *s <= 'Z')
		{
			if (*s + 13 <= 'Z')
			{
				z = *s;
				csupport(z, cont);
			}
			else
			{
				z = *s - 13;
				csupport(z, cont);
			}
		}
		else if (*s >= 'a' && *s <= 'z')
		{
			if (*s + 13 <= 'z')
			{
				z = *s;
				csupport(z, cont);
			}
			else
			{
				z = *s - 13;
				csupport(z, cont);
			}
		}
		else
		{
			z = *s;
			csupport(z, cont);
		}
	return (cont);
}

/**
 * csupport - and putchar
 * @z: char to print
 * @cont: counter
 * Return: cont
 **/
int csupport(char z, int cont)
{
	_putchar(z);
	cont++;

	return (cont);
}
