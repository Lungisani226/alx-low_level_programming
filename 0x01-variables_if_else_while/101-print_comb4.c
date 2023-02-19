#include <stdio.h>

/**
 * main - Dertermines if a number is positive, negative or zero
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

for (i = 1; i < 1000 ; i++)
{

	if (i / 100 == i / 10 % 10 ||
		i / 100 == i % 10 ||
		i / 10 % 10 == i % 10 ||
		i / 100 > i / 10 % 10 ||
		i / 100 > i % 10 ||
		i / 10 % 10 > i % 10
)
		{continue; }

		putchar((i / 100) + '0');
		putchar((i / 10) % 10 + '0');
		putchar((i % 10) + '0');
	if ((i / 100) == 7)
		{break; }
		putchar(',');
		putchar(' ');
}
		putchar('\n');
	{return 0; }
}
