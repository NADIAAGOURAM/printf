#include "main.h"
/**
* _printf - produces output according to a format.
* @format: a character string.
* @...: list of parameters.
* Return: the number of characters printed
*/
int _printf(const char *format, ...)
{
	va_list argl;
	int num, somme = 0;
	char *arg, c;
	unsigned int b;

	va_start(argl, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (!format || (format[0] == '%' && format[1] == ' ' && !format[2]))
		return (-1);
	for ( ; *format ; format++)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				c = va_arg(argl, int);
				somme += _putchar(c);
			}
			else if (*format == 's')
			{
				arg = va_arg(argl, char *);
				somme += print_string(arg);
			}
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
	va_end(argl);
	return (somme);
}
