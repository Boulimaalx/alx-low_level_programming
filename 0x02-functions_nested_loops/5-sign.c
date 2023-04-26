#include "main.h"
/**
 * print_sign - Entry point
 *
 * Description : 'The programm prints the sign of an entered number'
 * @n: The number to be checked int
 *
 * Return : 1 for postivie num, -1 for negative num and 0 for anything else
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
