#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/*functions Prototypes */
int _printf(const char *format, ...);

/* Handlers */
int print_char_handler(va_list args, char *buffer, unsigned int buffer_size);
int print_string_handler(va_list args, char *buffer, unsigned int buffer_size);
int print_percent_handler(va_list args, char *buffer, unsigned int buffer_size);
int print_integer_handler(va_list args, char *buffer, unsigned int buffer_size);
int print_bases_handler(va_list args, char *buffer, unsigned int buffer_size);

/*help functions*/
int _putchar(char *buffer, int buffersize);
int (*get_handler(char specifier))(va_list, char *, unsigned int);

#endif
