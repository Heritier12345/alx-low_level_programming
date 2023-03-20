#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'get the last degit of a number'
 * Return: Always0
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	printf("Last digit of %d is %d", n, ld);
	if (ld > 5)
	{
		printf(" and is greater than 5");
	}
	if (ld == 0)
	{
		printf(" and is o");
	}
	if (ld < 6 && ld != 0)
	{
		printf(" and is less than 6 and not 0");
	}
	printf("\n");
	return (0);
}
