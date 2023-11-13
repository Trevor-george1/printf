#include "main.h"
/**
 * print_hex - print hexa
 * @args: arguments
 * @uppercase: uper
 * Return: printed
 */
int print_hex(va_list args, int uppercase)
{
	unsigned int value = va_arg(args, unsigned int);
	char hex_buff[12];
	char *hex_str;

	snprintf(hex_buff, sizeof(hex_buff), uppercase ? "%X" : "%x", value);
	hex_str = strdup(hex_buff);
	if (hex_str == NULL)
	{
		return (0);
	}
	write(1, hex_str, strlen(hex_str));
	free(hex_str);
	return (strlen(hex_str));
}

