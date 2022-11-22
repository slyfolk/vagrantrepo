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
	int (*f)(va_list);

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
			f = check_specifiers(&format[i + 1]);
			if (f != NULL)
			{
				value = f(args);
				count += value;
				i += 2;
				continue;
			}
			if (format[i + 1] == '\0')
				break;
			if (format[i + 1] != '\0')
			{
				value = _putchar(format[i + 1]);
				count += value;
				i = i + 2;
				continue;
			}
				   
		}
	}
	va_end(args);
	return (count);
	
}
