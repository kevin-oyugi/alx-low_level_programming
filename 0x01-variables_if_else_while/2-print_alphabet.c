#include <stdio.h>

/**
 * main - alphabet letters
 *
 * Description: print the lowercase letters of the alphabet
 *
 * Return: 0
 */

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar(10);

	return (0);
}
