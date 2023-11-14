#include "main.h"
/**
 * print_char - print char
 * @args: arguments
 * Return: printed
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);
	char *char_buff = (char *)malloc(2);

	if (char_buff == NULL)
	{
		return (0);
	}
	char_buff[0] = c;
	char_buff[1] = '\0';

	write(1, char_buff, 1);
	free(char_buff);
	return (1);
}
