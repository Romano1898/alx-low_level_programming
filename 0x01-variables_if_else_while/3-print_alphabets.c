#include <stdio.h>

/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
char al;
char Al;
for (al = 'a'; al <= 'z'; ++al)
{
putchar(al);
}
for (Al = 'A'; Al <= 'Z'; ++Al)
{
putchar(Al);
}
putchar('\n');
return (0);
}
