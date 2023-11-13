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
