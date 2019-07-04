#include "holberton.h"
/**
 * leet - encodes a string into 1337 (leet)
 * @s: pointer to the string
 * Return: void
 */
char *leet(char *s)
{
	int i, a;

	char minus[5] = {'a', 'e', 'o', 't', 'l'};

	char mayus[5] = {'A', 'E', 'O', 'T', 'L'};

	char number[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
	for (a = 0; a <= 4; a++)
	{
		if (s[i] == minus[a] || s[i] == mayus[a])
		s[i] = number[a];
	}
	}
return (s);
}
