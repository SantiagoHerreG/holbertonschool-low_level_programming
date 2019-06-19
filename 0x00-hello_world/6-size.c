#include <stdio.h>
/**
 * main - print the size of diferent types
 * ch: saves the byte value of a char
 * i: saves the byte value of a int
 * l: saves the byte value of a long
 * llo: saves the byte value of a long long int
 * f: saves the byte value of a float
 *
 * Description: print a phrase with correspondent value
 * Return: zero
 */
int main(void)
{
char ch;
int i;
long l;
long long int llo;
float f;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(ch));
printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long: %lu byte(s)\n", (unsigned long)sizeof(l));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(llo));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
