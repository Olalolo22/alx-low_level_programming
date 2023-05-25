#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints the alphabet in lowercase letters
 *
 * Description - prints "prints the alphabet in lowercase letters"
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

	putchar('\n');

	return (0);
}
