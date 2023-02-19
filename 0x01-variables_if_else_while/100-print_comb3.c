#include <stdio.h>

/**
 * main - Dertermines if a number is positive, negative or zero
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i < 100 ; i++)
{

		if ((i / 10) == (i % 10) || (i % 10) == 0 || (i / 10) > (i % 10))
		{continue; }

			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
		if ((i / 10) == 8)
			{break; }
			putchar(',');
			putchar(' ');
}
			putchar('\n');
		{return 0; }
}
