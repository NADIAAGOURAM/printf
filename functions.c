#include "main.h"

/**
 * _putchar - writes a character to stdout
 * @c:caracter
 * Return:1 on success On error -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 *_strlen - return length of a string
 *@s: pointer char
 *Return: int length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	{
		len++;
	}
	return (len);
}

/**
 *print_string - print string
 *@s: pointer char
 *Return: length string
 */
int print_string(char *s)
{
	int i;

	if (s == NULL)
	{
		s = "(null)";
	}
	for (i = 0; i < _strlen(s); i++)
	{
		_putchar(s[i]);
	}
	return (_strlen(s));
}

/**
  * print_numbers - prints an integer.
  * @n: integer
  * Return: length number
 **/

int print_numbers(int n)
{
	unsigned int nb;
	int length = 0;

	nb = n;
	if (n == 0)
	{
		length += _putchar('0');
		return (length);
	}
	if (n == -2147483648 )
	{
		length += _putchar('-');
		length += _putchar('2');
		print_numbers(147483648);
		return (1);
	}
	else if (n < 0)
	{
		length += _putchar('-');
		nb = -n;
	}
	if (nb / 10 != 0)
		print_numbers(nb / 10);

	length += _putchar((nb % 10) + '0');
	return (length);
}

