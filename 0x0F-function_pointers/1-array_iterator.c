#include "function_pointers.h"
#include <stdio.h>
/**
 *	* array_iterator - prints each array
 *	* @array: the array
 *	* @size: the elements to be printed
 *	* @action: pointer to print
 *	* Return: 0 when succesful
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
