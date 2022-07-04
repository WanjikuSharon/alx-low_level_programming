#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Main- Entry point
 * Description - Assigning a variable positive or negative
 *Return: Always 0(Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if(n==0)
		printf("n is zero: %d\n", n);
	if(n>0)
		printf("n is positive\n");
	if(n<0)
		printf("n is negative\n");
	return (0);
}
