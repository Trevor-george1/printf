#include "main.h"
/**
 * selector - selects the right function to perfrom
 * @format: pointer to string of format
 * @args: number of arguments
 * Return: printed characters
 */
int selector(const char *format, va_list args)
{
	int printed = 0;

	switch (*format)
	{
		case 'd':
		case 'i':
			printed += print_int(args);
			break;
		case 'c':
			printed += print_char(args);
			break;
		case 's':
			printed += print_string(args);
			break;
		case '%':
			write(1, format, 1);
			return (1);
			break;
		case 'b':
			printed += print_binary(va_arg(args, unsigned int));
			break;
		default:
			break;
	}
	return (printed);
}
