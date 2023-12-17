#include "sort.h"

/**
 * swap_ints - function to swap two integers
 * @a: first integer to swap
 * @b: second integer to swap
*/
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * max_heapify - turns a binary tree into a complete binary heap
 * @array: the array containing integers
 * @size: size of the array
 * @base: base row index
 * @root: root node index
*/
void max_heapify(int *array, size_t size, size_t base, size_t root)
{
	size_t left, right, large;

	left = 2 * root + 1;
	right = 2 * root + 1;
	large = root;
	if (left < base && array[left] > array[large])
		large = left;
	if (right < base && array[right] > array[large])
		large = right;
	if (large != root)
	{
		swap_ints(array + root, array + large);
		print_array(array, size);
		max_heapify(array, size, base, large);
	}
}

/**
 * heap_sort - use heap sort algorithm process
 * @array: the array of int to sort
 * @size: the size of the array
*/
void heap_sort(int *array, size_t size)
{
	int i;

	if (array == NULL || size < 2)
		return;
	for (i = (size / 2) - 1; i >= 0; i--)
		max_heapify(array, size, size, i);
	for (i = size - 1; i > 0; i--)
	{
		swap_ints(array, array + i);
		print_array(array, size);
		max_heapify(array, size, i, 0);
	}
}
