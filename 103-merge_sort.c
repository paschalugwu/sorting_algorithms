#include "sort.h"

/**
 * merge_subarr - merge two sorted subarrays into a single sorted
 * @subarr: subarray to sort
 * @buff: buffer to store sorted subarrys
 * @front: front index of array
 * @mid: middle index of array
 * @back: back index of the array
*/
void merge_subarr(int *subarr, int *buff, size_t front,
size_t mid, size_t back)
{
	size_t i, j, k = 0;

	printf("Merging...\n[left]: ");
	print_array(subarr + front, mid - front);
	printf("[right]: ");
	print_array(subarr + mid, back - mid);

	for (i = front, j = mid; i < mid && j < back; k++)
	{
		buff[k] = (subarr[i] < subarr[j]) ? subarr[i++] : subarr[j++];
	}

	for (; i < mid; i++)
	{
		buff[k++] = subarr[i];
	}

	for (; j < back; j++)
	{
		buff[k++] = subarr[j];
	}

	for (i = front, k = 0; i < back; i++)
	{
		subarr[i] = buff[k++];
	}
	printf("[Done]: ");
	print_array(subarr + front, back - front);
}

/**
 * merge_sort_recursive - implements the merge sort through recursion
 * @subarr: the subarray
 * @buff: the buffer for array
 * @front: the front indices
 * @back: the back indices
*/
void merge_sort_recursive(int *subarr, int *buff, size_t front, size_t back)
{
	size_t mid;

	if (back - front > 1)
	{
		mid = front + (back - front) / 2;
		merge_sort_recursive(subarr, buff, front, mid);
		merge_sort_recursive(subarr, buff, mid, back);
		merge_subarr(subarr, buff, front, mid, back);
	}
}

/**
 * merge_sort - to merge the two sorted halves of the subarray
 * @array: the array to sort
 * @size: the size of array to sort
*/
void merge_sort(int *array, size_t size)
{
	int *buff;

	if (array == NULL || size < 2)
		return;
	buff = malloc(sizeof(int) * size);
	if (buff == NULL)
		return;
	merge_sort_recursive(array, buff, 0, size);
	free(buff);
}
