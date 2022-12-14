#include "main.h"
#include <stdlib.h>

/**
 * _lower - checks if a character is lowercase
 * @c: the character
 * Return: 1 if letter is lowercase, 0 if not
 */

int _lower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
