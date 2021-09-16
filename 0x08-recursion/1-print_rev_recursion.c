#include "main.h"

/**
 * main: _print_rev_recursion - Prints a string in reverse
 *
 * Definition:
 *
 * @s: String to be reversed
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
