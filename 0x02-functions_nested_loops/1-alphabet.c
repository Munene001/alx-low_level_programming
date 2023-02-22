#include "main.h"
#include<stdio.h>


/**
 * main - check the code
 * print_alphabet - print all alphabet in lowercases
 *Return: Always 0.
 */
void print_alphabet(void)
{
	char letter;


	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}

		_putchar('\n');
}

