#include <stdio.h>

/**
 *_strlen - Entry point
 *
 *Description: Returns the length of a string
 *@str: the length of @str/
 *
 *Return: The length of @str
 */
size_t _strlen(const char *str)
{
size_t length = 0;

while (*str++)
length++;
return (length);
}
