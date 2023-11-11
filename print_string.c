#include "main.h"
/**
 * print_string - prints a string
 * @args: number of args
 * @printed: the printed chars
 * Return: printed chars
 */
int print_string(va_list args, int printed)
{
	char *s = va_arg(args, char *);

	while (*s != '\0')
	{
		putchar(*s);
		printed++;
		s++;
	}
	return (printed);
}
