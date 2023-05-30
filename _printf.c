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

	va_start(argl, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (!format || (format[0] == '%' && format[1] == ' ' && !format[2]))
		return (-1);

	somme += print_cases(const char *format, va_list argl);

	va_end(argl);
	return (somme);
}
