#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
#include <stddef.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *s);
int print_string(va_list argl);
int print_numbers(int n);
int print_integers(int n);
int print_binary(unsigned int b);
int printUnsigned(unsigned int number);
int printHexadecimal(unsigned int number);
int printOctal(unsigned int number);
int print_cases(const char *format, va_list argl);

#endif
