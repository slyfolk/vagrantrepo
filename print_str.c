#include "main.h"


int print_str(va_list args)
{
	int value, count;

	count = 0;
	char *s = va_arg(args, char *);
	if(s)
	{
		int i;
		for (i = 0; s[i] != '\0'; i++)
		{
			value = _putchar(s[i]);
			count += value;
		}
		
	}
	return (count);
}
