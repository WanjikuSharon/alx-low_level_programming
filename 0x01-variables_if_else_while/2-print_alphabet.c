#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main Entry Point 
 * Description- Prints the alphabet in lowercase
 * Return: 0 Always(Success)
 */
int main(void)
{
	char d ='a';
	while (d <= 'z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
