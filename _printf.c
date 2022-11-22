#include "main.h"


/**
 * _printf - Custom Printf function
 * @format: Formating String
 * @...:Variadic Arguments
 */




int _printf(const char *format, ...)
{
	va_list args;
	va_start (args, format);
	int count;
	int value;
	int i = 0;

	if (format == NULL)
	{
		return (-1);
	}

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			value = _putchar(format[i]);
			count += value;
			i++;
			continue;
		}

		if (format[i] == '%')
		{
			
		}
	}
	va_end(args);
	return (count);
	
}
