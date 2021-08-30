#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main:
 *
 *description:
 *
 *return = 0
 */

int main(void)
{
	int n;

	srandtime((0));
	n = rand() - RAND_MAX / 2;

	last = n % 10;
	if (last > 5)
		printf("The last digit is %d and is greater than 5\n", n, last);
	else if (last < 6 && last !=0)
		printf("The last digit is %d and is less than 6 and not 0\n", n,
		       last);
	else if (last == 0)
		printf("the last digit is %d and is 0\n", n, last);
	return (0);
