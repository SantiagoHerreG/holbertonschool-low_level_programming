#include <stdio.h>
/**
 * main - print the last digit of random characters
 *
 * Description: print a digit
 * Return: zero
 */
int main(void)
{

	int c, b, a, z;

	for (c = '0'; c <= '9'; c++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (a = '0'; a <= '9'; a++)
			{
				for (z = '0'; z <= '9'; z++)
				{
					if (((c != a) || (b != z)) && ((b + (c * 10)) < (z + (a * 10))))
					{
					putchar(c);
					putchar(b);
					putchar(' ');
					putchar(a);
					putchar(z);
					if ((c != '9') || (b != '8') || (a != '9') || (z != '9'))
					{
					putchar(',');
					putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
