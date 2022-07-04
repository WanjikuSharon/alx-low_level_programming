#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Header
 * This program will assign a random number to the variable n each time it is executed
 * print whether the number stored in the variable n is positive or negative
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if(n==0)
		printf("n is zero\n");
	if(n>0)
		printf("n is positive\n");
	if(n<0)
		printf("n is negative\n");
	return (0);
}
