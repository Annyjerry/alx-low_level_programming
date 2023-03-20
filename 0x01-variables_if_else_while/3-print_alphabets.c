#include <stdlib.h>
#include <stdio.h>
/**
* main - returns alphabets both lower and upper cases
* Return: Always 0 (Success)
*/
int main(void)
{
	int alp = 'a';
	int ALP = 'A';

	while (alp <= 'z')
	{
		putchar(alp);
		alp = alp + 1;
	}
	while (ALP <= 'Z')
	{
		putchar(ALP);
		ALP = ALP + 1;
	}
	putchar('\n');
	return (0);
}
