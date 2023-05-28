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
	char *arg;

	va_start(argl, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (!format || (format[0] == '%' && format[1] == ' ' && !format[2]))
		return (-1);
	arg = va_arg(argl, char *);
	for (arg = (char *)format; *arg; arg++)
	{
		if (*arg != '%')
		{	somme += _putchar(*arg);
			continue;
		}
		arg++;
		if (format[1] == 'c' || format[1] == '%')
		{
			_putchar(*arg);
		}
		else if (format[1] == 's')
			print_string(*arg);
	}
	return (somme);
}
