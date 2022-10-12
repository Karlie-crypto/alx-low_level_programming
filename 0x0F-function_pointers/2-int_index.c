#include "function_pointers.h"

/**
 *int_index - series for an integer
 *@array: input array
 *@size: size of an array
 *@cmp: comparison function
 *Return: index of integer in cmp
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && cmp && size && array)
		for (i = 0; i <= size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}
