#include <stdio.h>

/**
 * main - prints in lowe then in uppercase
 *
 * return: Always 0 (Success)
 */
int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int a

	for (a = 0; a <= 26; a++)
	{
		putchar(alph[a]);
		a = toupper(a);
		putchar(alph[a]);
	}
	putchar ('\n');
	return (0);
}
