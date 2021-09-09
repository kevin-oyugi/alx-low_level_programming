#include "main.h"
/**
 * main: _strncpy - concatenates two words.
 * Definition:
 * @dest: output
 * @src: input
 * @n: lent;
 * Return: x.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for (; i < n; i++)
dest[i] = '\0';
return (dest);
}
