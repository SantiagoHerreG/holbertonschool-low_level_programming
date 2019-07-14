#include <stdio.h>
/**
 * main - prints the arguments passed to the program
 * @argc: number of arguments passed to main
 * @argv: array of pointers to strings passed to main
 * Return: exit success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);

	return (0);
}
