#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - determine if num is pos, neg or zero
 *
 *description: Assign a random num to the varable to be executed
 *
 *Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
		printf("%d is zero\n", n);
	else if(n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
