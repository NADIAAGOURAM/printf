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
int print_integers(int n);
int print_binary(unsigned int b);
int print_cases(const char *format, va_list argl);
int printf_r13(va_list argl);
#endif
