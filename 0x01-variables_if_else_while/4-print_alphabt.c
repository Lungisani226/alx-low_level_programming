#include <stdio.h>

/* betty style doc for function main goes there */
int main()
{
	char a;
	for(a = 'a'; a <= 'z'; a++)
	{
	    if(a == 'e'|| a == 'q')
	    continue;
	 putchar(a);
	}
	putchar('\n');
	return 0;
}

