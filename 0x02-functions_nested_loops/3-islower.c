#include "main.h"

/**
 *main: _islower - check for lowercase
 *
 *Definition: @c: c is an ascii character
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
