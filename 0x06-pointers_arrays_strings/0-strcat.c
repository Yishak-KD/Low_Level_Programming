#include "holberton.h"
/**
* _strcat - concatenates two strings.
* @dest: the pointer to the destination array.
* @src: the string to be copied.
* Return: success.
*/

char *_strcat(char *dest, char *src)
	{
	char dest[20];
	char src[20];

	_putchar("%s\n", strcat(dest, src));
	return (0);
	}
