#include "main.h"

/**
 * print_rev -  prints a string, in reverse, followed by a new line.
 * @s: char to be used
 * Return: 0
 */

void print_rev(char *s)
{
	int length = 0;

	while (*(s + length) != '\n')
	{
		length++;
	}
	for (int i = length = 1; i > 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
