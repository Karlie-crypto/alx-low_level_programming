#include "main.h"

/**
*  _strlen_recursion - Return the length of a string
*
*  @s: String
*
* Return: void
*/

int _strlen_recursion(char *s)
{
if (*s == '\0')

return (0);

s++;

return (1 + _strlen_recursion(s));
}
