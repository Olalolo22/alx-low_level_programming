#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9,
 * followed by a new line
 */

void print_numbers(void)
{
int v;
for (v = 0; v <= 9; v++)
{
_putchar(v + '0');
}
_putchar('\n');
}
