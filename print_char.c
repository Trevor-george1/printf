#include "main.h"
/**
 * print_char - print char
 * @args: arguments
 * @printed: char printed
 * Return: printed
 */
int print_char(va_list args, int printed)
{
	int c = va_arg(args, int);

	_putchar(c);
	return (printed + 1);
}
