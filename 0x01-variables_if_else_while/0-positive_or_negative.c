#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-determines if the number is postive or negative or zero
 * Return:Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2
		if (n  > 0)
		{
			("%d is postive\n"; n);
		}
		else if (n == 0)
		{
			("%d  is zero\n", n);
		}
		else
		{
			("%d is negative\n", n);
		}
	return (0);
}
