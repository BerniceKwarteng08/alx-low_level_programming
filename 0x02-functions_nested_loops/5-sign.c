#include "main.h"

/**
 * print_sign - print sign of a number
 * @n: number to be checked
 * Return: 1 (positive), -1 (negative) 0r 0 (otherwise)
 */

int print_sign(int n)

{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
