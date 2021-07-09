#include "holberton.h"
#include <stdio.h>

/**
* _isupper - checks for an uppercase.
* @c: character.
* Return: Always 0.
*/

int _isupper(int c)
	{
if (c >= 'A' && c <= 'Z')
{
	return (1);
}
	return (0);

	}
