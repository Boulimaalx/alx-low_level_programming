#include "main.h"
/**
 * print_sign - Entry point
 *
 * Description: 'programm that checks an entered number's sign'
 * @n: The number entered to be checked
 *
 * Return:1 if positve, -1 if negative and 0 elswhere
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
