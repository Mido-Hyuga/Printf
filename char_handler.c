#include "main.h"

/**
* char_handler - handle charachters
* @arg: list args
* @buffer: String pointer
* @buffer_size: unsigned integer
* Return: return 1
*/
int char_handler(va_list arg, char *buffer, unsigned int buffer_size)
{
	char value;

	value = va_arg(arg, int);
	buffer_handler(buffer, value, buffer_size);

	return (1);
}
