#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string with conversion specifiers
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int printed_chars = 0;
	int (*handler)(va_list, char *, unsigned int);
	char buffer[1024];
	unsigned int buffer_size = 0;

	if (!format)
		return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
		{
			if (buffer_size == 1024)
				_putchar(buffer, buffer_size), buffer_size = 0;
			buffer[buffer_size++] = *format, printed_chars++;
		}
		else if (*(format + 1) != '\0')
		{
			format++, handler = get_handler(*format);
			if (handler)
				buffer_size = handler(args, buffer, buffer_size);
			else
			{
				if (buffer_size == 1024)
					_putchar(buffer, buffer_size), buffer_size = 0;
				buffer[buffer_size++] = '%', buffer[buffer_size++] = *format;
				printed_chars += 2;
			}
		}
		format++;
	}
	if (buffer_size > 0)
		_putchar(buffer, buffer_size);
	va_end(args);
	return (printed_chars);
}
