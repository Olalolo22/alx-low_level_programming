#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char ap = 'a';

	while (ap <= 'z')
	{
		putchar (ap);
		ap++;
	}

	ap = 'A';
	while (ap <= 'Z')
	{
		putchar (ap);
		ap++;
	}
	putchar('\n');
	return (0);
}
