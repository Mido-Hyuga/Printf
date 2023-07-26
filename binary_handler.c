#include "main.h"

/**
* binary_handler - Function binary handler
* @arg_list: Argument list of type va_list
* @buffer: String
* @buf_size: unsigned Integer
* Return: Integer
*/
int binary_handler(va_list arg_list, char *buffer, unsigned int buf_size)
{
	unsigned int num = va_arg(arg_list, unsigned int);
	unsigned int temp = num;
	int i, j;
	char binary[64];

	for (i = 0; temp > 0; i++)
	{
		binary[i] = (temp % 2) + '0';
		temp /= 2;
	}

	/* Handle the case of 0 */
	if (num == 0)
		binary[i++] = '0';

	for (j = i - 1; j >= 0; j--)
	{
		if (buf_size == 1024)
		{
			_putchar(buffer, buf_size);
			buf_size = 0;
		}
		buffer[buf_size++] = binary[j];
	}

	return (i);
}
