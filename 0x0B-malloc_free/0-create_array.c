#include <stdio.h>
#include "main.h"
/**
 * *create_array - a function that creates an array of characters
 * @c: the characters in the array
 * @size: size of the array
 * Return: 1(Success)
 */
char *create_array(unsigned int size, char c)
{
	int size;
	char *arr;

	arr = malloc(sizeof(char) * size);
	arr[0] = 'A';

	if (size == 0)
	{
		_putchar("Failed to allocate memory\n");
		return (NULL);
	}
	free(arr);
	return (0);
}
