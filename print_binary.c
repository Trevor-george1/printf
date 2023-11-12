#include "main.h"
/**
 * print_binary - prints a binary
 * @num: number
 * Return: printed
 */
int print_binary(unsigned int num)
{
	int bin[32] = {0};
	int i = 0;
	int printed = 0;

	if (num == 0)
	{
		_putchar('0');
		printed++;
		return (printed);
	}
	while (num > 0)
	{
		bin[i] = num % 2;
		num /= 2;
		i++;
	}
	while (i > 0)
	{
		i--;
		_putchar('0' + bin[i]);
		printed++;
	}
	return (printed);
}
