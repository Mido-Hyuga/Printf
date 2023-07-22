#include "main.h"

/**
 * get_handler - Get the appropriate handler for the conversion specifier
 * @specifier: Format specifier character
 * Return: Function pointer to the appropriate handler
 */
int (*get_handler(char specifier))(va_list, char *, unsigned int)
{
	switch (specifier)
	{
		case 'c':
			return (&print_char_handler);
		case 's':
			return (&print_string_handler);
		case '%':
			return (&print_percent_handler);
		default:
			return (NULL); /* Invalid specifier */
	}
}
