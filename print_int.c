#include "main.h"
/**
 * print_int - prints number
 * @n: number
 * Return: n
 */
int print_int(long int n)
{
	int b;

	if (n < 0)
	{
		_putchar('-');
		return (1 + print_int(n * -1));
	}
	if (n < 10)
	{
		_putchar(n + '0');
		return (1);
	}
	b = (1 + print_int(n / 10));
	_putchar((n % 10) + '0');
	return (b);
}
