#include "main.h"

/**
 *main: print_last_digit - last digit
 *
 *Definition: print last digit
 *
 *@n: interger
 *
 *Return: Interger
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
		last = last * -1;
	_putchar(last + '0');

	return (last);
}
