#include "main.h"

/**
 * print_reverse - print w putchar
 * @s: pointer
 * Return: cont
 **/

int print_reverse(char *s)
{
	int i, cont;

	i = 0;
	cont = 0;

	if (!s)
		s = "(null)";

	while (*(s + i) != 0)
		i++;

	i = i - 1;
	for (; i >= 0; i--)
	{
		_putchar (*(s + i));
		cont++;
	}
	return (cont);
}
