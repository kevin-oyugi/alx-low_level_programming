#include "main.h"

/**
 * main:_print_rev_recursion - prints a string in reverse
 * Definition:
 * @s: string to print
 * Return: Nothing
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
