#include "sort.h"

/**
 * get_max - returns the maximum integer value
 * @array: the array of integers sorted
 * @size: the size of the array sorted
 *
 * Return: the maximum integer value
*/
int get_max(int *array, int size)
{
	int max, i;

	for (max = array[0], i = 1; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	return (max);
}

/**
 * radix_counting_sort - uses counting sort algorith to count occurence
 * @array: the arry to sort
 * @size: size of array
 * @sig: significant value
 * @buff: buffer to store integers
*/
void radix_counting_sort(int *array, size_t size, int sig, int *buff)
{
	int count[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	size_t i;

	for (i = 0; i < size; i++)
		count[(array[i] / sig) % 10] += 1;
	for (i = 1; i < 10; i++)
		count[i] += count[i - 1];
	for (i = size - 1; (int)i >= 0; i--)
	{
		buff[count[(array[i] / sig) % 10] - 1] = array[i];
		count[(array[i] / sig) % 10] -= 1;
	}
	for (i = 0; i < size; i++)
		array[i] = buff[i];
}

/**
 * radix_sort - sorts array using the Radix sort algorithm
 * @array: the array to sort
 * @size: the size of the array
*/
void radix_sort(int *array, size_t size)
{
	int max, sig, *buff;

	if (array == NULL || size < 2)
		return;
	buff = malloc(sizeof(int) * size);
	if (buff == NULL)
		return;
	max = get_max(array, size);
	for (sig = 1; max / sig > 0; sig *= 10)
	{
		radix_counting_sort(array, size, sig, buff);
		print_array(array, size);
	}
	free(buff);
}
