#include "main.h"
#include<stdio.h>
/**
 * 0-putchar.c - prints the string "_putchar" to stdout
 * main - Entry point, prints the string "_putchar" to stdout 
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

	return (0);
}

