#include <stdio.h>
#include "main.h"

/**
 * _puchar - Writes the character to stdout
 * @c: the character to print
 * Return: On success 1.
 * On error, -1 is returned and errno is set appropriately.
 */

int _putchaar(char c)
{
	return (write(1, &c, 1));
}
