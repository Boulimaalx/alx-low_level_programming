#include "main.h"

/**
 * _isdigit - checks if numbers are 0-9
 *@c: character to check
 *
 * Return: 1 on success and 0 if else
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
