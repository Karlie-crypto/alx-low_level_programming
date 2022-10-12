#include <stdio.h>
#include "functions_pointers.h"

/**
 * print_name - prints a name as is 
 * @name: name of the person
 *
 * Return: Nothing.
 **/
void print_name_as_is(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
return;
}
else
{
f(name);
}
}
