#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{	
	char ALP[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(ALP[i]);
	}	
	putchar('\n');
	return (0);
}

