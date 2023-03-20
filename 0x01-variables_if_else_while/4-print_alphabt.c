#include <stdlib.h>
#include <stdio.h>
/**
* main - returns lowercases alphabets EXCEPT e and q
* Return: Always 0 (Success)
*/
int main(void)
{
	int alp = 'a';

	while (alp <= 'z')
	{
		if ((alp == 'e') && (alp == 'q'))
		{
			alp++;
		}
		else
		{
			putchar(alp);
		}
		alp++;
	}
	return (0);
}
