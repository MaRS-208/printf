#include "main.h"
/**
 * print_int - prints number
 * @n: number
 * Return: n
 */
int print_int(int n)
{
	int b = 0;
	unsigned int a = n;

	if (n < 0)
	{
		_putchar('-');
		a = -n;
		return (1 + print_int(a));
	}
	if (a < 10)
	{
		_putchar(a + '0');
		return (1);
	}
	b = (1 + print_int(a / 10));
	_putchar((a % 10) + '0');
	return (b);
}
