#include "main.h"

/**
 * print_binary - prints binary
 * @b:unsigned int
 * Return: length number
 **/
int print_binary(unsigned int b)
{
	int count = 0;

	if (b > 1)
		count += print_binary(b / 2);
	putchar('0' + b % 2);
	count++;
	return (count);
}

/**
 * print_bin - prints binary
 * @b:unsigned int
 * Return: length number
 **/
int print_bin(unsigned int b)
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

/**
  * printUnsigned - print Unsigned
  * @number:unsigned int
  * Return: length number
 **/
int printUnsigned(unsigned int number)
{
	int count = 0;

	if (number > 9)
		count += printUnsigned(number / 10);
	putchar('0' + (number % 10));
	count++;
	return (count);
}

/**
  * printHexadecimal - print Hexadecimal
  * @number:unsigned int
  * Return: length number
 **/
int printHexadecimal(unsigned int number)
{
	int count = 0;
	unsigned int remainder;

	if (number > 15)
		count += printHexadecimal(number / 16);
	remainder = number % 16;
	if (remainder < 10)
	{
		putchar('0' + remainder);
	} else
	{
		putchar('a' + (remainder - 10));
	}
	count++;
	return (count);
}
/**
  * printOctal - print octal
  * @number:unsigned int
  * Return: length number
 **/
int printOctal(unsigned int number)
{
	int count = 0;

	if (number > 7)
		count += printOctal(number / 8);
	putchar('0' + (number % 8));
	count++;
	return (count);
}

