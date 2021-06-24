#include "holberton.h"
#include <stdio.h>

/**
* print_most_numbers - discerning numbers.
*/

void print_most_numbers(void)
{
int c;
for (c = 0; c <= 9; c++)
if (c == 2 && c == 4)
	continue;
else
	printf("%d\n", c);
}
