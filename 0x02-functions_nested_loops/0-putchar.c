#include "main.h"
#include<stdio.h>


/**
 * main - Entry point
 * 0-putchar.c - prints the string "_putchar" to stdout:
 * Return: Always 0 (Success)
*/
int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	while (str[i] != '\0')
	{
		putchar (str[i]);
		i++;
	}
		putchar ('\n');

	return (0);
}

