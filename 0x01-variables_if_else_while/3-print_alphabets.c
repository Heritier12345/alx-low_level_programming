#include <stdio.h>

/*
 * main - Prints the alphabet.
 * Return: Always 0 (Success)
 * whtas the problem noe
 *
 */
int main(void)
{
        int n = 97;
        int m =65;

        while (n <= 122)
        {
                putchar(n);
                n++;
        }
        while (m <= 90)
        {
                putchar(m);
                m++;
        }
        puchar('\n');
        return (0);
}
