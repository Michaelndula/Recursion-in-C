#include "holberton.h"
#include <stdio.h>

/**
 * @brief a function that returns the natural square root of a number.
 *Prototype: int _sqrt_recursion(int n);
 *If n does not have a natural square root, the function should return -1
 * 
 * @return int 
 */

/**
 * _sqrt - calculates natural square root of a number
 * @n: takes int
 * @m: takes int
 *
 * Return: returns natural square root of a number
 */

int _sqrt(int n, int m)
{
	if (m * m > n)
		return (-1);
	else if (m * m == n)
		return (m);
	else
		return (_sqrt(n, m + 1));
}

/**
 * _sqrt_recursion - calculates natural square root of a number
 * @n: takes int
 *
 * Return: returns natural square root of a number
 */
 
int _sqrt_recursion(int n)
{
    return (_sqrt(n, 1));
}

int main(void)
{
    int r;

    r = _sqrt_recursion(1);
    printf("%d\n", r);
    r = _sqrt_recursion(1024);
    printf("%d\n", r);
    r = _sqrt_recursion(16);
    printf("%d\n", r);
    r = _sqrt_recursion(17);
    printf("%d\n", r);
    r = _sqrt_recursion(25);
    printf("%d\n", r);
    r = _sqrt_recursion(-1);
    printf("%d\n", r);
    return (0);
}