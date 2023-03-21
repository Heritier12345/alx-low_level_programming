#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print alphabet in lowercase'
 * Return: Always 0
 */
int main(void)
{
	int n = 57;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
