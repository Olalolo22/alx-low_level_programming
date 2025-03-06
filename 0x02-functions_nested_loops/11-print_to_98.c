#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @i: starting number
 *
 * Description: Prints numbers from input to 98
 * Return: void
 */
void print_to_98(int i)
{
if (i <= 98)
{
for (; i <= 98; i++)
{
printf("%d", i);
if (i != 98)
printf(", ");
}
}
else
{
for (; i >= 98; i--)
{
printf("%d", i);
if (i != 98)
printf(", ");
}
}
printf("\n"); }
