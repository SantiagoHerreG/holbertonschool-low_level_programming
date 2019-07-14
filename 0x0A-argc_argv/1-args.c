#include <stdio.h>
/**
 * main - prints the number of argument
 * @argc: number of arguments passed to main
 * @argv: array of pointers to strings passed to main
 * Return: exit success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
