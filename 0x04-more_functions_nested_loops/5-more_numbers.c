#include "holberton.h"
#include <stdio.h>

/**
* more_numbers - numbers to consider.
*/

void more_numbers(void)
{
int i = 0, j;
while (i < 10)
{
j = 0;
while (j < 15)
{
_putchar("%d", j);
j++;
}
_putchar("\n");
i++;
}
}

