#include "main.h"


int print_str(va_list args)
{
	int value, i, count;

	count = 0;
	char *s = va_arg(args, char*);
	
	if (s == NULL)
		return (-1);
	if(s != NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			value = _putchar(s[i]);
			count += value;
		}
		
	}

	if (s[i] == '\0')
		return (-1);

	return (count);
}
