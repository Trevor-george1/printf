#include "main.h"
/**
 * print_string - prints a string
 * @args: number of args
 * Return: printed chars
 */
int print_string(va_list args)
{
	int printed = 0;
	char *s = va_arg(args, char *);
	char *s_buff = strdup(s);

	if (s_buff == NULL)
	{
		return (0);
	}

	while (s_buff[printed])
	{
		write(1, &s_buff[printed], 1);
		printed++;
	}
	free(s_buff);
	return (printed);
}
/**
 * print_string_S - handles cunstom specifire s
 * @args: arguments
 * Return: prined chars
 */
int print_string_S(va_list args)
{
	int printed = 0;
	char *s = va_arg(args, char *);

	while (s[printed])
	{
		if (s[printed] < 32 || s[printed] >= 127)
		{
			char *s_buff = (char *)malloc(5);

			if (s_buff == NULL)
			{
				return (0);
			}
			s_buff[0] = '\\';
			s_buff[1] = 'x';
			s_buff[2] = (s[printed] / 16) + (s[printed] / 16 > 9 ? 'A' - 10 : '0');
			s_buff[3] = (s[printed] % 16) + (s[printed] % 16 > 9 ? 'A' - 10 : '0');
			s_buff[4] = '\0';

			write(1, s_buff, _strlen(s_buff));
			printed += 1;
			free(s_buff);
		}
		else
		{
			write(1, &s[printed], 1);
			printed += 1;
		}
	}
	return (printed);
}
/**
 * _strlen - function that finds length of string
 * @c: string
 * Return: length
 */
int _strlen(char *c)
{
	int i = 0;

	while (*c != '\0')
	{
		i++;
		c++;
	}
	return (i);
}
