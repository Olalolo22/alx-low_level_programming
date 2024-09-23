#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always (0) success
 */

int main(void)
{
	char hexdm[] = "0123456789abcdef";
	int digi;

	for (digi = 0; digi < 16; digi++)
	{
		putchar(hexdm[digi]);
	}
	putchar('\n');

	return (0);
}
