#include "main.h"

/**
 * main: print_alphabet - print alphabet
 *
 *Description: lowcase letters
 *
 * Return: void
 */

void print_alphabet(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		_putchar(lower);
		lower++;
	}
	_putchar('\n');
}
