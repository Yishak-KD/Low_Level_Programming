#include <stdio.h>
/**
 * main- Entry Point
 * Return: Always 0 (success)
 */
int main(void)
{
char charType;
int intType;
long int longIntType;
long long int longLongIntType;
float floatType;
printf("size of char: %lu byte\n", (unsigned long)sizeof(charType));
printf("size of int: %lu byte\n", (unsigned long)sizeof(intType));
printf("size of long int: %lu byte\n", (unsigned long)sizeof(longIntType));
printf("size of long long int: %lu byte\n", (unsigned long)sizeof(longLongIntType));
printf("size of float: %lu byte\n", (unsigned long)sizeof(floatType));
return (0);
}
