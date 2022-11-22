#include "main.h"


int print_char(va_list args)
{
	int count = 0, value;
	
	int c = va_arg(args, int);
	value = _putchar(c);
	count += value;
	return (count);
}
