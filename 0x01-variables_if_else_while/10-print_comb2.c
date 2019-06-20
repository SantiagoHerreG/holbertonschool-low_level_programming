#include <stdio.h>
/**
 * main - print the last digit of random characters
 *
 * Description: print a digit
 * Return: zero
 */
int main(void)
{

	int c, b;

	for (c = '0'; c <= '9'; c++)
		{
		for (b = '0'; b <= '9'; b++)
		{
		putchar(c);
		putchar(b);
		if (c != '9' ||  b != '9')
		{
		putchar(',');
		putchar(' ');
		}
		}
		}
	putchar('\n');
	return (0);
}
