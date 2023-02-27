#include "main.h"

/**
 *_strlen - function that returns the length of a string.
 *@s:variable
 *return :length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}
