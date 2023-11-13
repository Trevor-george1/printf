#include "main.h"

#define MAX_HEX_DIGITS 16

/**
 * print_p - prints a  pointer
 * @args: arguments
 * Return: printed
 */
int print_p(va_list args)
{
	void *ptr = va_arg(args, void *);
	unsigned long num = (unsigned long) ptr;
	int digits = 0;
	int i;
	unsigned long temp = num;
	int printed = 0;
	char hex_digits[MAX_HEX_DIGITS] = "0123456789abcdef";
	char hex[MAX_HEX_DIGITS];

	while (temp != 0)
	{
		digits++;
		temp /= 16;
	}
	printed += _putchar('0');
	printed += _putchar('x');

	if (num == 0)
	{
		printed += _putchar('0');
	}
	else
	{
		for (i = digits - 1; i >= 0; i--)
		{
			int digit = num % 16;

			hex[i] = hex_digits[digit];
			num /= 16;
		}
		for (i = 0; i < digits; i++)
		{
			printed += _putchar(hex[i]);
		}
	}
	return (printed);
}
