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
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(char) * size);
	if (size == 0 || arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
