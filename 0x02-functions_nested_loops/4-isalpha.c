#include "main.h"

/**
 *main: _isalpha - checks for lowercase and uppercase
 *
 *Definition: upercase and lowercase letter
 *
 *@c: Ascii character
 *
 *Return: 1 (if uppercase or lowercase)
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
