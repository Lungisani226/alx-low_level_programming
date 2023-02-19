#include <stdio.h>

/**
 * main - Dertermines if a number is positive, negative or zero
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
{
	if (a == 'e' || a == 'q')
	continue;
		putchar(a);
}
		putchar('\n');
	{return 0; }
}

