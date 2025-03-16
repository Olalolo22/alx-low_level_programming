#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * except 2 and 4, followed by a new line
 * Description: Can only use _putchar twice.
 */

void print_most_numbers(void)
{
for (int v = 0; v <= 9; v++)
{
if (!(v == 2 || v == 4))
{
_putchar(v + '0');
}
}
_putchar('\n');
}
