#include <stdarg.h>
#include <stdio.h>
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
	int somme = 0;
	char *arg, c;

	va_start(argl, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (!format || (format[0] == '%' && format[1] == ' ' && !format[2]))
		return (-1);
	arg = va_arg(argl, char *);
	for (format; *format; format++)
	{
		if (*format != '%')
		{	somme += _putchar(*format);
			continue;
		}
		format++;
		if (format[1] == 'c' || format[1] == '%')
		{
			c = va_arg(argl, int);
			_putchar(c);
			somme++;
		}
		else if (format[1] == 's')
			somme += print_string(*arg);
	}
	va_end(argl);
	return (somme);
}
