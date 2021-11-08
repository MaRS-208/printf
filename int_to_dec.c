#include "main.h"

/**
 * int_to_bin - int to binary
 * @k: integer
 * Return: n
 **/
int int_to_bin(int k)
{
	int n, c, cont = 0;

	for (c = 31; c >= 0; c--)
	{
		n = k >> c;
		cont++;

		if (n)
			_putchar('1');
		else
			_putchar('0');
	}
	return (cont);
}
