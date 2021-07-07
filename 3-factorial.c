#include "holberton.h"
#include <stdio.h>

/**
 * @brief  a function that returns the factorial of a given number.
 *Prototype: int factorial(int n);
 *If n is lower than 0, the function should return -1 to indicate an error
 *Factorial of 0 is 1
 * 
 * @return int 
 */
int factorial(int n)
{
    if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}

int main(void)
{
    int r;

    r = factorial(1);
    printf("%d\n", r);
    r = factorial(5);
    printf("%d\n", r);
    r = factorial(10);
    printf("%d\n", r);
    r = factorial(-1024);
    printf("%d\n", r);
    return (0);
}