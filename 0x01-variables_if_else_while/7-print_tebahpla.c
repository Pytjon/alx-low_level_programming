#include <stdio.h>
/**
 * main - prints the alphabets in reverse
 * Return: 0 (Success)
 */
int main(void)
{
	char la;

	for (la = 'z'; la >= 'a'; la--)
		putchar(la);

	putchar('\n');

	return (0);
}
