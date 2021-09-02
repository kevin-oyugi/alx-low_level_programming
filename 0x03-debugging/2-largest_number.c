#include "main.h"

/**
 * main: largest_number - prints the largest number
 *
 * @a: first integer
 * @b: second integer
 * @c: third integer
 *
 * Return: lagest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && a > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
