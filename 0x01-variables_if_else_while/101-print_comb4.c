#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int c;
	int d;
	int e = 0;

	while (e < 100)
	{
		d = 0;
		while (d < 100)
		{
			c = 0;
			while (c < 0)
			{
				if (c != d && d != e && e < d && d < c)
				{
					putchar('0' + e);
					putchar('0' + d);
				}
				c++;
			}
			d++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
