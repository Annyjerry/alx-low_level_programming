#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints all possible combinations of two digit
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l = '0';
	int p = '0';

	for (p = '0'; p <= '9'; p++)
	{
		for (l = '0'; l <= '9'; l++)
		{
			if (!((l == p) || (p > l)))
			{
				putchar(p);
				putchar(l);
				if (!(l == '9' && p == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
