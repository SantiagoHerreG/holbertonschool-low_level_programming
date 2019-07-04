#include "holberton.h"
/**
 * string_toupper - changes all lowercase to upper case letter of a string
 * @s: pointer to the array
 * Return: void
 */
char *string_toupper(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
	}
return (s);
}
