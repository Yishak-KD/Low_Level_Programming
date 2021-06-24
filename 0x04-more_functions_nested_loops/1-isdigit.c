#include "holberton.h"
#include <stdio.h>

/**
* _isdigit - checks for a number from 0 to 9.
* @c: number.
* Return: Always 0.
*/

int _isdigit(int c)
	{
if (c >= 48 && c <= 57)
{
	return (1);
}
	return (0);
	}
