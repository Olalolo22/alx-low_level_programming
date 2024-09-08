#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	#ifdef __x86_64__ /* Check if compiling for 64-bit */
printf("64-bit compilation:\n");
#else
printf("32-bit compilation:\n");
#endif

printf("Size of a char: %d byte(s)\n", (int)sizeof(char));
printf("Size of an int: %d byte(s)\n", (int)sizeof(int));
printf("Size of a long int: %d byte(s)\n", (int)sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", (int)sizeof(long long int));
printf("Size of a float: %d byte(s)\n", (int)sizeof(float));

