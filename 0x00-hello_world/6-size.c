#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always (0) (Success)
 */
int main(void)
{
int intType;
float floaType;
long int longintType;
long long int longlongintType;
char charType;
printf("Size of a char: %lu bytes\n", sizeof(charType));
printf("Size of an int: %lu bytes\n", sizeof(intType));
printf("Size of a long int: %lu bytes\n", sizeof(longintType));
printf("Size of a long long int: %lu bytes\n", sizeof(longlongintType));
printf("Size of an float: %lu bytes\n", sizeof(floatType));
return (0);
}
