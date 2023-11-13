#include "main.h"
/**
 * print_p - prints a  pointer
 * @args: arguments
 * Return: printed
 */
int print_p(va_list args)
{
	void *ptr = va_arg(args, void *);
	size_t i = 0;
	unsigned char byte;

	size_t ptr_size = sizeof(void *);
	char hex_buffer[2 * ptr_size + 3];

	hex_buffer[0] = '0';
	hex_buffer[1] = 'x';

	for (i = 0; i < ptr_size; i++)
	{
		byte = *((unsigned char *) ptr + i);
		hex_buffer[2 * i + 2] = (byte >> 4) < 10 ?
		('0' + (byte >> 4)) : ('a' + (byte >> 4) - 10);
		hex_buffer[2 * i + 3] = (byte & 0x0F) < 10 ?
		('0' + (byte & 0X0F)) : ('a' + (byte & 0x0F) - 10);
	}
	hex_buffer[2 * ptr_size + 2] = '\0';
	write(1, hex_buffer, strlen(hex_buffer));

	return (strlen(hex_buffer));
}
