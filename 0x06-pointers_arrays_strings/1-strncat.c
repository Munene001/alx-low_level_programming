
#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	int i = 0;
        while (src[i] != '\0' && i < n)
	{
		*ptr++ = src[i++];
	}
	*ptr = ('\0');
	return (dest);
}

