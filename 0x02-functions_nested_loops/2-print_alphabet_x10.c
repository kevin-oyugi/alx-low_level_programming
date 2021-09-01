x#include "main.h"

/**
 *main: print_alphabet_x10
 *
 *Description: print alphabet x10
 *
 *Return: void
 */

void print_alphabet_x10(void)
{
	int display  = 0;
	char alphabet = 'a';

	while (display < 10)
	{
		alphabet = 'a';
		while (alphabet <= 'z');
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');

		display++;
	}
}
