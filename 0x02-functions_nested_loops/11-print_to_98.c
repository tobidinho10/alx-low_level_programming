#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all natural numbers from input to 98
 * @n: starting point
 *
 * Return: void return nothing.
 */

void print_to_98(int n)
{
if (n > 98)
{
    while   (n > 98)
	printf("%d, ", n--);
    print("%d\n", n);
}
else
{
    while (n < 98)
	 printf("%d, ", n++);
    printf("%\n", n);
}
}

