#include "main.h"

/**
* print_char_handler - Handle the %c format specifier
* @args: Argument list
* @buffer: Buffer to store the formatted string
* @buffer_size: Current buffer size
* Return: Number of characters printed
*/
int print_char_handler(va_list args, char *buffer, unsigned int buffer_size)
{
	char c = va_arg(args, int);

	if (buffer_size == 1024)
	{
		_putchar(buffer, buffer_size);
		buffer_size = 0;
	}
	buffer[buffer_size++] = c;
	return (buffer_size);
}
