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
printf("size of char: %zu byte\n", sizeof(charType));
printf("size of int: %zu byte\n", sizeof(intType));
printf("size of long int: %zu byte\n", sizeof(longIntType));
printf("size of long long int: %zu byte\n", sizeof(longLongIntType));
printf("size of float: %zu byte\n", sizeof(floatType));
return (0);
}
