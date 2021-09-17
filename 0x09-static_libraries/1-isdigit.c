#include "main.h"

/**
 * main: _isdigit - check for digit bwn 1 and 9
 * Description:
 * @c: interger
 * Return: 1 if btw 1-9 else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
