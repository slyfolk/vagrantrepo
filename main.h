#ifndef MAIN_H
#define MAIN_H
/* Inclusion of all libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <string.h>
#include <unistd.h>
/* Inclusion of Function Prototypes */
int _printf(const char *format, ...);
int _putchar(char c);
int (*check_specifier(const char *format))(va_list);

typedef struct func
{
	char *t;
	int (*f)(va_list);
}func_t;

#endif
