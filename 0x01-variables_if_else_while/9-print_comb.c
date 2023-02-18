#include <stdio.h>

/* betty style doc for function main goes there */
int main()
{
	int n;
	for (n = 0; n <= 9; n++)
	{
	putchar(n +  '0');
	if (n == 9)
	{break;}
	putchar(',');
	putchar('\t');
	}
	putchar('\n');
	
	return 0;
}
