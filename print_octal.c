#include "main.h"
/**
 * print_oct - prints octal
 * @arg: arguments
 * Return: count
 */
int print_oct(va_list arg)
{
	unsigned int value = va_arg(arg, unsigned int);
	unsigned int temp = value;
	char *octalDigits;
	int index, count = 0;

	if (value == 0)
	{
		write(1, "0", 1);
		count++;
	}
	while (temp > 0)
	{
		temp /= 8;
		count++;
	}
	octalDigits = (char *)malloc(count);
	if (octalDigits == NULL)
	{
		return (0);
	}
	index = count - 1;
	while (value > 0)
	{
		octalDigits[index] = '0' + (value % 8);
		value /= 8;
		index--;
	}
	write(1, octalDigits, count);
	free(octalDigits);
	return (count);
}
