#include "main.h"
/**
 * print_int - function that prints an integer
 * @args: list of arguments
 * Return: printed
 */
int print_int(va_list args)
{
	int num = va_arg(args, int);
	int div;
	int digit;
	int printed = 0;

	if (num < 0)
	{
		write(1, "-", 1);
		printed++;
		num = -num;
	}

	div = 1;
	while (num / div > 9)
	{
		div *= 10;
	}
	while (div > 0)
	{
		digit = num / div;
		_putchar('0' + digit);
		printed++;
		num %= div;
		div /= 10;
	}
	return (printed);
}
