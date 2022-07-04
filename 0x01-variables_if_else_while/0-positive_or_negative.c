#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Main-Entry point (No argument)
 *
 * Description - assigning a random number to the variable n each time it is executed
 *
 * If number is greater than 0: its positive
 *
 * If number equals to 0: its zero
 *
 * If number is less than 0: its negative
 *
 *Return: Always 0(Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ( n > 0 ) {
		printf("%d is positive\n", n);
	}
	else if ( n < 0 ) {
		printf("%d is negative\n", n);
	}
	else {
		printf("%d is zero\n", n);
	}
	return (0);
}
