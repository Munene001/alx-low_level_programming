#include <stdio.h>
#include "main.h"
/**
 * include header file
 * declare variables
 * used while loop to iterate the variable
 *
 */

int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	return (0);
}

