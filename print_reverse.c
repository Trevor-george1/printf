#include "main.h"
/**
 * print_reverse - prints a string in reverse
 * @args: arguments
 * Return: len of string printed
 */
int print_reverse(va_list args)
{
	int len = 0, i;
	char *new;

	char *s = va_arg(args, char *);

	len = strlen(s);
	new = malloc(len + 1);
	if (new == NULL)
	{
		return (0);
	}
	for (i = 0; i < len; i++)
	{
		new[i] = s[len - 1 - i];
	}
	new[i] = '\0';
	write(1, new, len);
	free(new);
	return (len);
}
