#include <stdio.h>

/**
 * main - prints in lower then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int a;

	for (a = 0; a < 52; a++)
	{
		putchar(alph[a]);
	}
	putchar ('\n');
	return (0);
}
