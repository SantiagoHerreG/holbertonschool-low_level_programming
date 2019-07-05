#include "holberton.h"
/**
 * rot13 - encodes a string into rot13
 * @s: pointer to the string
 * Return: void
 */
char *rot13(char *s)
{
	int i, a;

	char abcd[52] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};

	char rot13[52] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	for (i = 0; s[i] != '\0'; i++)
	{
	for (a = 0; a <= 52; a++)
	{
		if (s[i] == abcd[a])
		{
		s[i] = rot13[a];
		break;
		}
	}
	}
return (s);
}
