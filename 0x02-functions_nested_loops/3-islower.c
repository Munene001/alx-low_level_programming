#include "main.h"

/**
 *main - checkcode
 *int _slower(int c) = checks for lowercase and returns 1 if true
 *return 1 if c is lowercase
 *Returns 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return 1;
	else
		return 0;
}
