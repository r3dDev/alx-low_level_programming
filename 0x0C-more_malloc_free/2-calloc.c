#include <stdlib.h>
#include "main.h"

/**
 * *_memset - this method that fills memory with a constant byte
 * @s: this is the memory area to be filled
 * @b: this is the char to copy
 * @n: this number of times to copy b
 *
 * Return: this pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - this method allocates memory for an array
 * @nmemb: this is the number of elements in the array
 * @size: this is the size of each element
 *
 * Return: this is pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
