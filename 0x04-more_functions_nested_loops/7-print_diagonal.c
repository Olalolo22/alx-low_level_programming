#include "main.h"

/*
 * print_diagonal - draws a diagonal line in the terminal
 * @n: number of times the character \ should be printed
 * Description - can only use _putchar to print
*/

void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}

else
{
int i, j;
for (i = 0; i <= n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
_putchar('\n');
}
}
