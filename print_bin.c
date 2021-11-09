#include "main.h"

/**
 * print_bin - int to binary
 * @k: int
 * Return: cont
 **/
int print_bin(int *k)
{
	int cont = 0;
	int i;
	unsigned int n, m;

	n = *k;
	while (n / 2 != 0)
	{
		n = n / 2;
		cont++;
	}
	for (i = cont; i >= 0; i--)
	{
		m = n % 2;
		n = n / 2;
		_putchar(m + '0');
	}
	return (cont);
}
