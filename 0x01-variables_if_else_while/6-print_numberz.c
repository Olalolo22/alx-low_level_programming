#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always (0) Success
 */

int main(void)
{
	int dnm;

	for (dnm = 0; dnm < 10; dnm++)
	{
		putchar(dnm + '0');
	}
	putchar('\n');

	return (0);
}
