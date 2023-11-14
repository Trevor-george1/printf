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
	va_start(args, fomrat;)
	const char *current = format;

	/** check if format string is empty*/
	if (curret == NULL)
		return (-1);
	/** otherwise loop throught the format string*/
	while (*current)
	{
		if (*current == '%')
		{
			current++;

			int flags = 0;
			while (current == '+' || *current == ' ' || *current == '#')
			{
				if (*current == '+')
				{
					flags |= 1;
				}
				else if (*current == ' ')
				{
					flags |= 2;
				}
				else if (*current == '#')
				{
					flags |= 4;
				}
				current++;
			}
			printed += selector(format, args);
		}
		else
		{
			write(1, current, 1);
			printed++;
		}
		current++;
	}
	va_end(args);

	return (printed);
}
