#include "main.h"

/**
* print_int - print integers of Numbers
* @args: Variadic Arguments
* Return: int;
*/

int print_int(va_list args)
{
	int value, count = 0;
	
	int num = va_list(args, int);

	if (num < 0)
	{
		value = _putchar('-');
		count += value;
	}
	_putchar(num);
	
	
}
