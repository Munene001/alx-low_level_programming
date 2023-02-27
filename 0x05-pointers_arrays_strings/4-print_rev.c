#include "main.h"

/**
 * print_rev -  prints a string, in reverse, followed by a new line.
 * @s: char to be used
 * Return: 0
 */

void print_rev(char *s)
{
	int length = 0;
	int i;

	while (*s != '\n')
	{
		length++;
		s++;
	}
	for (i = length; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
