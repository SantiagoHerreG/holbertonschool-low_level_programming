#include <stdio.h>
#include <unistd.h>
/**
 * main - print with write command
 * f: saves the byte value of a float
 *
 * Description: print a phrase
 * Return: zero
 */
int main(void)
{
write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
