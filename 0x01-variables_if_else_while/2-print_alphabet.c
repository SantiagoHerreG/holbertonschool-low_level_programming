#include <stdio.h>
/**
 * main - print the last digit of random characters
 *
 * Description: print a digit
 * Return: zero
 */
int main(void)
{

	int c;

	for (c = 'a'; c <= 'z'; ++c)
		{
		putchar(c);
		}
	putchar('\n');
	return (0);
}
