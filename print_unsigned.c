#include "main.h"
/**
 * print_unsigned_ - prints unsiged it to stdout
 * @args: list of arguments
 * Return: printed
 */
int print_unsigned_(va_list args)
{
	unsigned int n = va_arg(args, unsigned  int);
	int i  = 1, last = n % 10, digit, exp = 1;
	int num;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		write(1, "-", 1);
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');
	return (i);
}
