#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints all possible combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int u = '0';
	int t = '0';
	int h = '0';

	for (h = '0'; h <= '9'; h++)
	{
		for (t = '0'; t <= '9'; t++)
		{
			for (u = '0'; u <= '9'; u++)
			{
				if (!((u == t) || (t == h) || (t > u) || (h > t)))
				{
					putchar(h);
					putchar(t);
					putchar(u);
					if (!(u == '9' && h == '7' && u == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
