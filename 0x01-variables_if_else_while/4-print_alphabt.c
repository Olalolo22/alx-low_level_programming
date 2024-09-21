#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */

int main(void)
{
	char ap = 'a';

	while (ap <= 'z')
	{
		if (ap != 'q' && ap != 'e')
		{
			putchar(ap);
		}
		ap++;
	}
	putchar('\n');

	return (0);
}
