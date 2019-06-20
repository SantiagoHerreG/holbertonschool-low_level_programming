#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print the last digit of random characters
 *
 * Description: print a digit
 * Return: zero
 */
int main(void)
{

	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last < 0)
		{
		last = last * (-1);
		}
		printf("Last digit of %d is %d ", n, last);
	if (last > 5)
		{
		printf("and is greater than 5\n");
		}
	else if (last == 0)
		{
		printf("and is 0\n");
		}
	else
		{
		printf("and is less than 6 and not 0\n");
		}
	return (0);
}
