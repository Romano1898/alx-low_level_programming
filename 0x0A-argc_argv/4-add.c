#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: 0 (Success), 1 (Failure)
 */

int main(int argc, char *argv[])
{
int i;
int j;
int sum;

if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
const char *arg = argv[i];
j = 0;
while (arg[j])
{
if (!isdigit(arg[j]))
{
printf("Error\n");
return (1);
}
j++;
}
sum += atoi(arg);
}
printf("%d\n", sum);
return (0);
}
