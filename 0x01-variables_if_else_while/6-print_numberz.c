#include <stdio.h>

/**
 * main - single digit numbers
 *
 * Description: print single digit numbers
 *
 * Return: 0
 */

int main(void)
{
	int i;

	i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}

	putchar(10);

	return (0);
}
