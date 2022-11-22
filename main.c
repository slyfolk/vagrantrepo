#include "main.h"
#include<stdio.h>



int main(void)
{
	int len;
    int len2;
    //unsigned int ui;
    //void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    putchar('\n');
    len2 = printf("Let's try to printf a simple sentence.\n");
    //ui = (unsigned int)INT_MAX + 1024;
    //addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    putchar('\n');
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    putchar('\n');
    printf("Negative:[%d]\n", -762534);
    /*_printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);*/
    _printf("Character:[%c]\n", 'H');
    putchar('\n');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    putchar('\n');
    printf("String:[%s]\n", "I am a string !");
    //_printf("Address:[%p]\n", addr);
    //printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    putchar('\n');
    len2 = printf("Percent:[%%]\n");
    //_printf("Len:[%d]\n", len);
    //printf("Len:[%d]\n", len2);
    //_printf("Unknown:[%r]\n");
    //printf("Unknown:[%r]\n");
    return (0);
}
