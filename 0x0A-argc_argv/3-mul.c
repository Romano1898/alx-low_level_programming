#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Product of two numbers (Success) 1 (Failure)
 */

int main(int argc, char *argv[])
{
if (argc != 3)
{
return (1);
}
int num1;
int num2;
 int prod;
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
prod = num1 *num2;
printf("%d\n", prod);
return (0);
}
