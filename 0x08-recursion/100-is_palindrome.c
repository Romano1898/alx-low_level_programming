#include "main.h"

/**
 * checkpalindrome - checks if string is a palindrome or not.
 *
 * @start: range to check palindrome
 * @end: range to check palindrome
 *
 * Return: is a palindrome (1), if not (0)
 *
 */
int checkpalindrome(char *start, char *end)
{
	if (start >= end)
{
	return (1);
}
	else if (*start != *end)
{
	return (0);
}
	else
{
	return (checkpalindrome(start + 1, end - 1));
}
}

/**
 * getlen - calculates length of a string to be checked
 *
 * @str: input string
 * @len: length of string
 *
 * Return: length of string
 *
 */
int getlen(char *str, int len)
{
	if (*str == '\0')
{
	return (len);
}
	else
{
	return (getlen(str + 1, len + 1));
}
}

/**
 * is_palindrome - checks if a string is a palindrome or not.
 *
 * @s: input string to be checked for palindrome
 *
 * Return: if string is palindrome (1), if not (0)
 *
 */
int is_palindrome(char *s)
{
int len;
char *end;
len  = getlen(s, 0);
*end =  s + len - 1;
return (checkpalindrome(s, end));
}
