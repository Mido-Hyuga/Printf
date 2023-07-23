#include "main.h"

/**
*_putchar - Function printing character
*@buffersize: Size of buffer
*@buffer: String
*Return: Int
*/

int _putchar(char *buffer, int buffersize)
{
	return (write(1, buffer, buffersize));
}

