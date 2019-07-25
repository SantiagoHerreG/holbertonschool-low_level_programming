#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints its own function
 * @argc: number of arguments passed
 * @argv: pointer to array of strings
 * Return: 0 on succes
 */
int main(int argc, char **argv)
{
	int a, b;

	unsigned int i = 0, z;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	a = atoi(argv[1]);

	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}

	unsigned int *ptr_main = (unsigned int *) main;

	for (i = 0; (i * 4) < a; i++)
	{
		z = (*(ptr_main + i));
		for (b = 0; b < 4 && (4 * i) + b < a - 1; b++)
		{
			if (z % 256 != 0)
				printf("%02x ", z % 256);
			z = z / 256;
			if (z % 256 == 0 && b < 3)
			{
				a++;
				b++;
			}
		}
		if ((4 * i) + b == a - 1 && z % 256 != 0)
			printf("%02x\n", z % 256);
		else if (b < 4)
			a = a + 4;
	}
}
