#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int counter = 2;

	float a = 1, b = a + 1, c = (a + b);

	printf("%.0f, %.0f, ", a, b);

	while (counter < 98)
{
	printf("%.0f", c);
	a = b;
	b = c;
	c = (a + b);
	counter++;
	if (counter < 98)
{
	printf(", ");
}
}
	printf("\n");
	return (0);
}
