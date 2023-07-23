#include "main.h"
/**
 * per_handler - Function for character %
 * @ar: arguments
 * @a: String
 * @b: Integer
 * Return: Always 1
 */
int per_handler(va_list ar __attribute__((unused)), char *a, unsigned int b)
{
	buffer_handler(a, '%', b);
	return (1);
}
