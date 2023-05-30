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
		len++;
	return (len);
}
/**
 *print_string - print string
 *@argl:arguments
 *Return: number of caractere printed
 */
int print_string(va_list argl)
{
	int i;
	char *s;

	s = va_arg(argl, char *);
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
  * print_integers - prints an integer.
  * @n: long integer
  * Return: length number
 **/
int print_integers(long int n)
{
	int divisor, count = 0;

	if (n == -2147483648)
	{
		count += _putchar('-');
		count += _putchar('2');
		print_integers(147483648);
		return (1);
	}
	else if (n < 0)
	{
		count += _putchar('-');
		n = -n;
	}
	divisor = 1;
	while (n / divisor > 9)
	{
		divisor *= 10;
	}
	while (divisor > 0)
	{
		_putchar('0' + n / divisor);
		n %= divisor;
		divisor /= 10;
		count++;
	}
	return (count);
}
