#include "main.h"
#include <unistd.h>

/**
 * _putchar writes the character c to stdout
 * and c: the character to print out
 * Return: On Success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
