#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	int counter = 0;
	int i, max_index;
	char rev[counter];

	while (s[counter] != '\0')
	{
		counter++;
	}
	max_index = counter - 1;
	for (i = 0; i < counter; i++)
	{
		rev[i] = s[max_index - i];
	}
	for (i = 0; i < counter; i++)
	{
		s[i] = rev[i];
	}
}
