<<<<<<< HEAD
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
=======
#include <stdlib.h>
>>>>>>> 15fc6e5917f1636eecb8d9a3f9680250841ae1ea
#include <stdio.h>

/**
 * main - the function main use printf to print numbers
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
>>>>>>> f4f33b6e2f85f12a423041d972c3cf15cc0d322d
}
