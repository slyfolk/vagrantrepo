#include "main.h"

/**
  * _putchar - print a character
  * @c: character to be printed
  * @Return: return number of characters printed
  */

int _putchar(char s)
{
	return (write(1, &s, 1));
}
