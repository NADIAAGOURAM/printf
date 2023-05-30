#include "main.h"
/**
* print_cases - produces output according to a format.
* @format: a character string.
* @argl: list of parameters.
* Return: the number of characters printed
*/
int print_cases(const char *format, va_list argl)
{
	int num, somme = 0;
	unsigned int b;

	for ( ; *format ; format++)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				somme += _putchar(va_arg(argl, int));
			}
			else if (*format == 's')
				somme += print_string(argl);
			else if (*format == '%')
				somme += _putchar('%');
			else if (*format == 'i' || *format == 'd')
			{
				num = va_arg(argl, int);
				somme += print_integers(num);
			}
			else if (*format == 'b')
			{
				b = va_arg(argl, unsigned int);
				somme += print_binary(b);
			}
			else
			{
				somme += _putchar('%');
				if (*format)
					somme += _putchar(*format);
			}
		}
		else
		{
			somme += _putchar(*format);
			continue;
		}
	}
	return (somme);
}
