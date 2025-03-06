#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * Each row represents one complete inner loop (y) for a single value of
 *  x. The process continues until all rows (x values) are complete.
 */

void times_table(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			z = x * y;
			if (y == 0)
			{
				_putchar(z + '0');
			}
			if (z < 10 && y != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(z + '0');
			}
			else if (z >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
/*
*So for the answer to the question, var x is the outer loop, the one thats
*controls the rows, and var y is the inner loop, the one that controls
*the columns. var z is the product of x and y. The if statement checks if
*y is 0, if it is, it prints the value of z as is. If y is not 0, it checks
*if z is less than 10. If it is, it prints a comma, space, space, and then
*the value of z as is. If z is not less than 10, it prints a comma, space,
*the value of z divided by 10 (which gives the tens digit), and then the
*value of z modulo 10 (which gives the ones digit). This is done to print
*/
