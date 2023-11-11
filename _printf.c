#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: pointer to string
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int printed = 0;
	va_list args;

	/** check if format string is empty*/
	if (format == NULL)
		return (-1);
	va_start(args, format);
	/** otherwise loop throught the format string*/
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			printed = selector(format, args, printed);
			format++;
		}
		else
		{
			putchar(*format);
			printed++;
			format++;
		}
	}
	va_end(args);

	return (printed);
}
