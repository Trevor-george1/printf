#include "main.h"
/**
 * selector - selects the right function to perfrom
 * @format: pointer to string of format
 * @args: number of arguments
 * @printed: number of printed  char
 * Return: printed characters
 */
int selector(const char *format, va_list args, int printed)
{
	switch (*format)
	{
		case 'c':
			printed = print_char(args, printed);
			break;
		case 's':
			printed = print_string(args, printed);
			break;
		case '%':
			write(1, format, 1);
			printed++;
			break;
		default:
			break;
	}
	return (printed);
}
