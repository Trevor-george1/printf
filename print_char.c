#include "main.h"
/**
 * print_char - print char
 * @args: arguments
 * Return: printed
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	write(1, &c, 1);
	return (1);
}
