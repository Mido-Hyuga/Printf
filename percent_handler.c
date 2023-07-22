#include "main.h"

/**
* print_percent_handler - Handle the %% format specifier
* @args: Argument list
* @buffer: Buffer to store the formatted string
* @buffer_size: Current buffer size
* Return: Number of characters printed
*/
int print_percent_handler(va_list args, char *buffer, unsigned int buffer_size)
{
	(void)args;

	if (buffer_size == 1024)
	{
		_putchar(buffer, buffer_size);
		buffer_size = 0;
	}
	buffer[buffer_size++] = '%';
	return (buffer_size);
}
