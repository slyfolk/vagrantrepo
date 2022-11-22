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

int print_str(va_list args);
int _printf(const char *format, ...);
int _putchar(char c);
int (*check_specifiers(const char *format))(va_list);
int print_char(va_list);

/**
  * struct func - collection of types for specifiers
  * @t: pointer to character to be compared
  * @f: function pointer
  */

typedef struct func
{
	char *t;
	int (*f)(va_list);
}func_t;

#endif
