#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints the number
 *
 * Return: 0 success
 */

int main(void)
{
	int number = 0;

	while (number < 10)
	{
		putchar("%d\n", number);
		number++;
	}

	return (0);
}
