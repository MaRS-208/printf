#include "main.h"

/**
 * print_reverse - print w putchar
 * @s: pointer
 * Return: cont
 **/

int print_reverse(char *s)
{
	int i, cont;
	char *z;

	i = 0;
	cont = 0;

	z = s;
	if (!z)
		z = "(null)";

	while (*(z + i) != 0)
		i++;
	for (i -= 1; i >= 0; i--)
	{
		_putchar (*(z + i));
		cont++;
	}
	return (cont);
}
