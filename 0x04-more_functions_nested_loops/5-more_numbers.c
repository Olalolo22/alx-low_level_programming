#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 * Description: Can only use _putchar 3 times
 */

void more_numbers(void)
{
int f, m;
for (f = 0; f <= 10; f++)
{
for (m = 0; m <= 14; m++)
{
if (m >= 10)
{
_putchar(m / 10 + '0');
}
_putchar(m % 10 + '0');
}
_putchar('\n');
}
}
