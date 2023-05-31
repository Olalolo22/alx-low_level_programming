#include <stdio.h>

/**
 * print_alphabet - prints the alphabet in lowercase,then comes a new line
 *
 * Description - prints _putchar twice
 *
 * Return: 0 success
 */

void print_alphabet(void)
{
	char c = a;

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n')
}
int main(void)
{
	print_alphabet();
	return (0);
}
