#include "holberton.h"

/**
 * @brief a function that prints a string in reverse.
 *Prototype: void _print_rev_recursion(char *s); 
 * 
 * @return int 
 */
void _putchar(char c)
{
    write(1, &c, 1);
}

void _print_rev_recursion(char *s)
{
    if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

int main(void)
{
    _print_rev_recursion("\nColton Walker");
    return (0);
}