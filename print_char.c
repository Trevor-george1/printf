#include "main.h"
/**
 * print_char - print char
 * @args: arguments
 * Return: printed
 */
int print_char(va_list args)
{
	int printed = 0;
	int c = va_arg(args, int);

	_putchar(c);
	printed++;
	return (printed);
}
