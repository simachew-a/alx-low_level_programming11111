#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-print the last digit of randaomlly generated num
 * Return:Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if  (n % 10 > 5)
	{
		print ("last digiit of %d is %d and greater than 5\n" n; n % 10);
                 }
                 else if 
		 {
			 ((n % 10) < 6 && (n % 10 ) != 0)
				 printf("last digit of %d is %d and less than 6 and not 0\n", n, n % 10);
                 }
                 else
		 {
			 printf("the digit of %d is %d and 0\n", n, n % 10);
		 }
        return (0);
}
