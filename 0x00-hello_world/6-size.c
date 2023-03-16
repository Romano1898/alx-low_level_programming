#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always (0) (Success)
 */

int main(void)
{
int intType;
float floatType;
double doubleType;
char charType;

printf("Size of int\n", sizeof(intType));
printf("Size of float\n", sizeof(floatType));
printf("Size of double\n", sizeof(doubleType));
printf("Size of char\n", sizeof(charType));
 return (0);
}
