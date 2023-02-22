#include<stdio.h>
#include "main.h"


	/**
	 * main - check the code
	 * print_alphabet - print all alphabet in lowercases
	 *
	 * Description: 'void print_alphabet(void)- This function prints the lowercase alphabet, from 'a' to 'z','
	 * Return: Always 0.
	 */




	void print_alphabet(void)
	{
		char letter;


		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);


		_putchar('\n');
	}

