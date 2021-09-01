#include "main.h"

/**
 * main: print_alphabet
 *
 *Description: lowcase letters
 *
 * Return: 0 Always
 */

void print_alphabet(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
