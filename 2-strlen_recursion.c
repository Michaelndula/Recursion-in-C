#include "holberton.h"
#include <stdio.h>

/**
 * @brief a function that returns the length of a string.
 *Prototype: int _strlen_recursion(char *s);
 * 
 * @return int 
 */
int _strlen_recursion(char *s)
{
    if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

int main(void)
{
    int n;

    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);
    return (0);
}