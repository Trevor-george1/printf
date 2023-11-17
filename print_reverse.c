#include "main.h"
/**
 * print_reverse - prints a string in reverse
 * @args: arguments
 * Return: len of string printed
 */
int print_reverse(va_list args)
{
	int printed = 0;
	int len = 0, i;

	char *s = va_arg(args, char *);

	while (s[len])
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
		printed++;
	}
	return (printed);
}
