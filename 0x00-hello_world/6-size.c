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

printf("Size of a char: %lu \n", sizeof(intType));
printf("Size of float %lu \n", sizeof(floatType));
printf("Size of double %lu \n", sizeof(doubleType));
printf("Size of char %lu \n", sizeof(charType));
 return (0);
}
