#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: pointer to string
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list ap;

	/** check if format string is empty*/
	if (format == NULL)
		return (-1);

	va_start(ap, format);
	
	/** otherwise loop throught the format string*/
	while (*format)
	{
		count = 0;
		/** print out the string if % is not reached*/
		if (*format != '%')
		{
			write(1, format, 1);
			count++;
		}
		else
		{
			format++; /** move to next character if % reached*/

		if (*format == '\0')/**reached the end of string*/
			break;

		/** heandle the %*/
		if (*format == '%')
		{
			write(1, format, 1);
			count++;
		}

		/** handle c*/
		else if (*format == 'c')
		{
			char a = va_arg(ap, int);

			write(1, &a, 1);
			count++;
		}

		/**handle s*/
		else if (*format == 's')
		{
			char *s = va_arg(ap, char *);
			int s_len = 0;

			while (s[s_len] != '\0')
			{
				s_len++;
			}

			write(1, s, s_len);
			count += s_len;
		}
		}
		format++;
	}
	va_end(ap);

	return (count);
}
