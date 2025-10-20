#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(1);
	n = rand();
	printf("Last digit of %d is %d and is %s\n", n, n % 10,
	       (n % 10 == 0) ? "0" : ((n % 10 > 5) ? "greater than 5" : "less than 6 and not 0"));
	return (0);
}
