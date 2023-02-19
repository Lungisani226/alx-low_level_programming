#include <stdio.h>

/**
 * main - Dertermines if a number is positive, negative or zero
 *
 * Return: Always 0 (success)
 */
int main()
{
	int n;

	for (n = 0; n <= 9; n++)
{
	putchar(n +  '0');
	if (n == 9)
	{break;}
	putchar(',');
	putchar(' ');
}
	putchar('\n');
	{return 0; }
}
