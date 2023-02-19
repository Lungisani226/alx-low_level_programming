#include <stdio.h>

/**
 * main - Dertermines if a number is positive, negative or zero
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	char a;

	for (n = 0; n <= 9; n++)
{
	putchar(n +  '0');
}
	for (a = 'a'; a <= 'f'; a++)
{
	putchar(a);
}
	putchar('\n');
	{return 0; }
}
