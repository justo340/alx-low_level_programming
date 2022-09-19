#include "stdio.h"

/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 * @s: an input string
 * Return: Nothing
 */
void print_rev(char *s)
{
	char *len = s;

	while (*len) 
		len++;

	while (len)
	{
		putchar(*s);
		len--;
	}
	putchar('\n');
}
