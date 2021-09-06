#include "main.h"

/**
 * main: swap_int - swap value of int
 * Description:
 * @a: pointer
 * @b: pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int change = *a;
	*a = *b;
	*b = change;
}
