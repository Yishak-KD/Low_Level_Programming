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
long long int llT;
float floatType;
printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(charType));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(intType));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(llType));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(llT));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(floatType));
return (0);
}
