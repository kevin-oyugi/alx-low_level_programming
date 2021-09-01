#include "main.h"

void print_alphabet_x10(void)
{
	int repeat = 0;
	char alphabet = 'a';

	while (repeat < 10)
	{
		alphabet = 'a';
		while (alphabet <= 'z');
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');

		repeat++;
	}
}
