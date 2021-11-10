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
	unsigned int i, j;
	char ent[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char sal[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (!s)
		return (-1);
	else if (*s == 0)
		return (0);

	for (i = 0; s[i]; i++)
	{
		for (j = 0; ent[j]; j++)
		{
			if (ent[j] == s[i])
			{
				_putchar(sal[j]);
				cont++;
			}
			else if (!ent[j])
			{
				_putchar(s[i]);
				cont++;
			}
		}
	}
	return (cont);
}
