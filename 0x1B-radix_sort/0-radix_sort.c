#include "sort.h"
/**
 * _max - Maximum integer
 * @array: Max number will be found
 * @size: Size array
 * Return: Max number
 */
int _max(int *array, int size)
{
	int i, max;

	for (max = array[0], i = 1; i < size; i++)
		max = (array[i] > max) ? array[i] : max;
	return (max);
}

/**
 * _count - Sort
 * @array: Array sorted
 * @size: Size
 * @exp: Integer array[i] divided
 * Return: nothing
 */
void _count(int *array, int size, int exp)
{
	int i, *output, count[10] = {0};

	output = malloc(sizeof(int) * size);
	if (!output)
		return;

	for (i = 0; i < size; i++)
		count[(array[i] / exp) % 10]++;
	for (i = 1; i < 10; i++)
		count[i] += count[i - 1];
	for (i = size - 1; i >= 0; i--)
	{
		output[count[(array[i] / exp) % 10] - 1] = array[i];
		count[(array[i] / exp) % 10]--;
	}
	for (i = 0; i < size; i++)
		array[i] = output[i];
	free(output);
}

/**
 * radix_sort - Sorts array
 * @array: Array
 * @size: Size
 * Return: nothing
 */
void radix_sort(int *array, size_t size)
{
	int max, exp;

	if (size < 2)
		return;
	for (max = _max(array, size), exp = 1; max / exp > 0; exp *= 10)
	{
		_count(array, size, exp);
		print_array(array, size);
	}
}
