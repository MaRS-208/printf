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

	while (*(s + i) != 0)
		i++;
	while (i)
	{
		i--;
		_putchar (*(s + i));
		cont++;
	}
	_putchar('\n');
	return (cont);
}
