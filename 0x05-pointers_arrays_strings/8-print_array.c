#include "main.h"
#include <stdio.h>

/**
 * main: print_array - prints n elements of an array
 * Description:
 * @a: array of integers
 * @n: number of items to print
 * Return: void
 */

void print_array(int *a, int n)
{
	int contador;

	if (n > 0)
		for (contador = 0; contador < n; contador++)
		{
			printf("%d", a[contador]);
			if (contador < n - 1)
				printf(", ");
		}
	printf("\n");
}
