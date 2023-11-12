#include "main.h"
/**
 * print_hex - prints an octal number
 * @arg: arguments
 * @uppercase: upper
 * Return: printed
 */
int print_hex(va_list arg, int uppercase)
{
	unsigned int value = va_arg(arg, unsigned int);
	char hex_digit[8];
	int count = 0, digit;

	if (value == 0)
	{
		write(1, "0", 1);
		count++;
	}
	while (value > 0)
	{
		digit = value % 16;
		hex_digit[count] = digit < 10 ? '0' + digit :
		(uppercase ? 'A' : 'a') + digit - 10;
		value /= 16;
		count++;
	}
	while (count > 0)
	{
		count--;
		write(1, &hex_digit[count], 1);
	}
	return (count);
}

/**
 * print_unsigned_hex - prints unsiged hex
 * @arg: argumnets
 * Return: count
 */
int print_unsigned_hex(va_list arg)
{
	return (print_hex(arg, 0));
}

/**
 * print_unsigned_hex_upper - prints hex in upper
 * @arg: arguments
 * Return: count
 */
int print_unsigned_hex_upper(va_list arg)
{
	return (print_hex(arg, 1));
}
