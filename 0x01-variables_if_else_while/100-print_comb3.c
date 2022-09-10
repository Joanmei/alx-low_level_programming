<<<<<<< HEAD
#include <stdlib.h>
#include <stdio.h>
/**
 *main - the function main use printf to print numbers
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
int i;
int u = 0;
int j = 49;
for (i = 48; i <= 56; ++i)
{
for (; j <= 57; ++j)
{
putchar(i);
putchar(j);
if (i != 56 || j != 57)
{
putchar(44);
putchar(32);
}
}
u++;
j = 49 + u;
}
putchar('\n');
return (0);
=======
#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int n, m;
/**/
	for (n = 48; n <= 56; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
>>>>>>> f4f33b6e2f85f12a423041d972c3cf15cc0d322d
}
