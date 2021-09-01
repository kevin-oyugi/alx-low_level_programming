#include "main.h"

/**
 *main: _islower - check for lowercase
 *
 *Definition: lowercase alphabets
 *
 *Return: 1 if lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
