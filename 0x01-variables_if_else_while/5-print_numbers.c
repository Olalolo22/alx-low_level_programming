#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always (0) Success
 */

int main(void)
{
	int dnum;

	for (dnum = 0; dnum < 10; dnum++)
	{
		putchar(dnum + '0');
	}
	putchar('\n');

	return (0);
}
