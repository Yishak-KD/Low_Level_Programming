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
long long int llType;
float floatType;
printf("size of char: %lu byte(s)\n", (unsigned long)sizeof(charType));
printf("size of int: %lu byte(s)\n", (unsigned long)sizeof(intType));
printf("size of long int: %lu byte(s)\n", (unsigned long)sizeof(llType));
printf("size of long long int: %lu byte(s)\n", (unsigned long)sizeof(lIntType));
printf("size of float: %lu byte(s)\n", (unsigned long)sizeof(floatType));
return (0);
}
