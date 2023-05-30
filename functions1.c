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
/**
 * printf_r13 - prints the reversed string
 * @argl: type va_arg where is allocated printf arguments
 * Return: cmp
 *
 */
int printf_r13(va_list argl)
{
	int i, j, cmp = 0;
	int k = 0;
	char *str = va_arg(argl, char*);
	char enOrdre[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char r13[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		k = 0;
		for (j = 0; enOrdre[j] && !k; j++)
		{
			if (str[i] == enOrdre[j])
			{
				_putchar(r13[j]);
				cmp++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(str[i]);
			cmp++;
		}
	}
	return (cmp);
}
