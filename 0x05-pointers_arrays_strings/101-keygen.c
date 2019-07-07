#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random password to crack an executable file
 * Return: 0 on success
 */
int main(void)
{
	char pass[56], *ppass;

	int i, k = 0, n = 0;

	time_t t;

	ppass = pass;
	srand((unsigned int) time(&t));

	while (n != 2772)
	{
		for (i = 0; i < 56; i++)
		{
		k = rand() % 2;
			if (k == 0)
			{
			n = n + 42;
			ppass[i] = 42;
			}
			else
			{
			n = n + 84;
			ppass[i] = 84;
			}
		}
	if (n == 2772)
	{
	ppass[56] = '\0';
	break;
	}
	else
	n = 0;
	}
printf("%s", ppass);
return (0);
}
