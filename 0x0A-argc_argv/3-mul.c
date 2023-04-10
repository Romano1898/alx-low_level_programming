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
int num1;
int num2;
int prod;

if (argc != 3)
{
printf("Error\n");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
prod = num1 *num2;
printf("%d\n", prod);
return (0);

}
