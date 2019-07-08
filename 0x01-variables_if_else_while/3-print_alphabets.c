#include <stdio.h>
/**
 * main - print the last digit of random characters
 *
 * Description: print a digit
 * Return: zero
 */
int main(void)
{

	int c, U;

	for (c = 'a'; c <= 'z'; ++c)
		{
		putchar(c);
		}
	for (U = 'A'; U <= 'Z'; ++U)
		{
		putchar(U);
		}
	putchar('\n');
	return (0);
}
