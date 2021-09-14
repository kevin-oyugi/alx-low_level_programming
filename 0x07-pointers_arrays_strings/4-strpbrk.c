#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Searches a string for any set of bytes
 * @s: String to be searched
 * @accept: String to match bytes
 *
 * Return: Pointer to byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}

	return ('\0');
}
