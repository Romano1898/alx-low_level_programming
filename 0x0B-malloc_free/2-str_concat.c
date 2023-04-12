#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 *
 * @s1: first input string
 * @s2: second input string
 *
 * Return: point to new memory with s1 contents, fail (NULL)
 *
 */

char *str_concat(char *s1, char *s2)
{
int i, j, s1_len = 0, s2_len = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[s1_len] != '\0')
s1_len++;
while (s2[s2_len] != '\0')
s2_len++;
char *result = (char *) malloc((s1_len + s2_len + 1) * sizeof(char));
if (result == NULL)
{
return (NULL);
}
for (i = 0; i < s1_len; i++)
{
result[i] = s1[i];
}
for (j = 0; j < s2_len; j++)
{
result[i + j] = s2[j];
}
result[i + j] = '\0';
return (result);
