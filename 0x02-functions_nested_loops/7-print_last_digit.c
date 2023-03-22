#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @c: the number to be computed.
 *
 * Return: absolute value of number or zero
 */

int print_last_digit(int c)
{
	if (c < 0)
	{
		int print_last_digit;

		print_last_digit = c * (-1);

		return (print_last_digit);
	}
	return (c);
}
