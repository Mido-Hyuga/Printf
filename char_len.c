#include "main.h"
/**
* char_len - calculate chars lenght
* @c: character or string
* Return: lenght of string
*/
int char_len(char *c)
{
	int i = 0;

	while (*(c + i))
		i++;
	return (i);
}
