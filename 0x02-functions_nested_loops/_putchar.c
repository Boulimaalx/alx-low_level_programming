#include <unistd.h>
/**
 * _putchar writes the character c to stdout
 * @c: The character to print
 * return 1 on success
 * return -1 if error
 */
int _putchar(char c)
{
	return (write(1,&c,1));
}
