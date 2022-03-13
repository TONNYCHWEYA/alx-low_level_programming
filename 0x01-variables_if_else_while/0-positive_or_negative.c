#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main -Entry point
 *Print if negative or positive
 *Return: Always 0 (Success)
 */
int main(void)
{
	long int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%ld is positive", n);
	}
	else if (n < 0)
	{
		printf("%ld is negative", n);
	}
	else
	{
		printf("%ld is zero", n);
	}
	return (0);
}
