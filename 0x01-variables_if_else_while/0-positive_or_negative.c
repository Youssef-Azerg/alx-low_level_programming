#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: false or true validation
 *
 * Return: 0 (success)
*/

int main(void)
{
	int n;

	strand(time(0));
	n = rand() - RAND_MAX / 2
	if (n > 0)
		print("%i is positive\n", n);
	else if (n == 0)
		print("%i is zero\n", n);
	else
		("%i is negative\n", n);
	return (0);
}
