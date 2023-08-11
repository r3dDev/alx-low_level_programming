#include <stdlib.h>
#include "main.h"

/**
 * *array_range - this is a method that creates an array of integers
 * @min: this is the minimum range of values stored
 * @max: this is the maximum range of values stored and number of elements
 *
 * Return: this is the pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
