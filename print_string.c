#include "main.h"
/**
 * print_string - prints a string
 * @args: number of args
 * Return: printed chars
 */
int print_string(va_list args)
{
	int printed = 0;
	char *s = va_arg(args, char *);

	while (*s != '\0')
	{
		_putchar(*s);
		printed++;
		s++;
	}
	return (printed);
}
