#include "main.h"


/**
 * check_specifier - function to check specifiers
 * @format:....
 * @args:...
 * Return: function pointer
 */


int (*check_specifiers(const char *format))(va_list)
{
	int i = 0;
	func_t specifiers[ ] =
	{
		{"c", print_char},
		{"s", print_str},
		{"%", print_cent},
		{NULL, NULL}
	};

	for (i = 0; specifiers[i].t != NULL; i++)
	{
		if (*(specifiers[i].t) == *format)
		{
			return (specifiers[i].f);
		}
	}

	return (0);
}
