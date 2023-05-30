#include "main.h"

/**
 * print_binary - prints binary
 * @b:unsigned int
 * Return: length number
 **/
int print_binary(unsigned int b)
{
	int i, count = 0, bits[32], index = 0;

	if (b == 0)
		return (_putchar('0'));
	while (b > 0)
	{
		bits[index++] = b % 2;
		b /= 2;
	}
	for (i = index - 1; i >= 0; i--)
		count += _putchar('0' + bits[i]);
	return (count);
}
