#include "main.h"
/**
 * main - Holberton
 *
 * Description: prints Holberton
 *
 * Return:0
 */

int main(void)
{
	char *c = "Holberton";
	int i = 0;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');

	return (0);
}
