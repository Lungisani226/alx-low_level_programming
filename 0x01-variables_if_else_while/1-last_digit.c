#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n % 10 > 5)
	{
	printf("the last digit of %d is greater than 5\n", n);
	}
	else if (n % 10 == 0)
	{
	    printf("the last digit of %d is zero\n", n);
	}
	else 
	printf("the last digit of %d is less than 6\n", n);
	

    return 0;
}
