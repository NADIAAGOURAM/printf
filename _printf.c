#include "main.h"
/**
* _printf - produces output according to a format.
* @format: a character string.
* @...: list of parameters.
* Return: the number of characters printed
*/
int _printf(const char *format, ...)
{
	va_list = argl;
	int somme = 0;
	char *db, *arg;
	params_t ArgIni = PARAMS_INIT;

	va_start(argl, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (!format || (format[0] == '%' && format[1] == ' ' && !format[2]))
		return (-1);
	for (arg = (char *)format; *arg; arg++)
	{
		init_params(&ArgInit, argl);
		if (*arg != '%')
		{	somme += _putchar(*arg);
			continue;
		}
		db = p;
		p++;
		while (format[1] == 'c' || format[1] == 's' == format[1] == '%')
		{
			_putchar(*arg);
		}
	}
	return (somme);
}
