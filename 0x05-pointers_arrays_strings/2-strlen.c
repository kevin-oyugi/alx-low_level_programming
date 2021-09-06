#include "main.h"

/**
 * main: _strlen - length of string
 * Description:
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int *length = s;

	while (*s)
	{
		s++;
	}

	return (s - length);
}
