#include "main.h"
/**
 * selector - selects the right function to perfrom
 * @format: pointer to string of format
 * @args: number of arguments
 * Return: printed characters
 */
int selector(const char *format, va_list args, int flags)
{
	int printed = 0;

	switch (*format)
	{
		case 'd':
		case 'i':
			printed += print_int(args);
			break;
		case 'c':
			printed += print_char(args, flags);
			break;
		case 's':
			printed += print_string(args, flags);
			break;
		case '%':
			write(1, "%", 1);
			printed++;
			break;
		case 'b':
			printed += print_binary(va_arg(args, unsigned int));
			break;
		case 'u':
			printed += print_unsigned_(args);
			break;
		case 'o':
			printed += print_oct(args);
			break;
		case 'x':
			printed += print_unsigned_hex(args);
			break;
		case 'X':
			printed += print_unsigned_hex_upper(args);
			break;
		case 'S':
			printed += print_string_S(args);
			break;
		case 'p':
			printed += print_p(args);
			break;
		case 'r':
			printed += print_string(args);
			break;
		default:
			break;
	}
	return (printed);
}
