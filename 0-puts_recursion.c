#include "holberton.h"

/**
 * @brief a function that prints a string, followed by a new line.
 *Prototype: void _puts_recursion(char *s);
 * 
 * @return int 
 */

void _putchar(char c)
{
    write(1, &c, 1);
}

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}

int main(void)
{
    _puts_recursion("Betty Holberton");
    return (0);
}