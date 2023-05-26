#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints the alphabet in lower and then upper case
 *
 * Description - prints "prints the alphabet in lower and then upper case"
 *
 * Return: 0 success
 */

int main(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		putchar(az);
	}

	for  (az = 'A'; az <= 'Z'; az++)
	{
		putchar(az);
	}

	putchar('\n');

	return (0);
}
