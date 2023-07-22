#include "main.h"

/**
* print_string_handler - Handle the %s format specifier
* @args: Argument list
* @buffer: Buffer to store the formatted string
* @buffer_size: Current buffer size
* Return: Number of characters printed
*/
int print_string_handler(va_list args, char *buffer, unsigned int buffer_size)
{
	char *str = va_arg(args, char *);
	unsigned int i;

	if (!str)
		str = "(null)";

	for (i = 0; str[i] && buffer_size < 1024; i++, buffer_size++)
	{
		if (buffer_size == 1024)
		{
			_putchar(buffer, buffer_size);
			buffer_size = 0;
		}
		buffer[buffer_size] = str[i];
	}
	return (buffer_size);
}
