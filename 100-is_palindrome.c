#include "holberton.h"
#include <stdio.h>

/**
 * @brief  function that returns 1 if a string is a palindrome and 0 if not.
 *Prototype: int is_palindrome(char *s);
 *An empty string is a palindrome
 * 
 * @return int 
 */
 
 /**
 * _strlen - prints a length of a string
 * @s: takes string
 *
 * Return: the length
 */

int _strlen(char *s)
{
	if (*s)
		return (1 + _strlen(s + 1));
	return (0);
}

/**
 * is_pali - helper function
 * @s: takes char
 * @start: start og the string
 * @finish: finish of the string
 *
 * Return: 1 or 0
 */

int is_pali(char *s, int start, int finish)
{
	if (start == finish)
		return (1);
	if (s[start] != s[finish])
		return (0);
	if (finish < start + 1)
		return (is_pali(s, start - 1, finish + 1));
	return (1);
}

/**
 * is_palindrome - tells if it is palindrome
 * @s: takes char
 *
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	return (is_pali(s, _strlen(s) - 1, 0));
}

int main(void)
{
    int r;

    r = is_palindrome("level");
    printf("%d\n", r);
    r = is_palindrome("redder");
    printf("%d\n", r);
    r = is_palindrome("holberton");
    printf("%d\n", r);
    r = is_palindrome("step on no pets");
    printf("%d\n", r);
    return (0);
}