#include "sort.h"
/**
 * sp - sorts an array of integers in ascending order
 * @b: value to swap
 * @a: value to swap
 */
void sp(int *a, int *b)
{
int t = *a;
*a = *b;
*b = t;
}
/**
 * partition - partition of the aray by pivot
 * @array: The array to be sorted
 * @low: low value
 * @high: high value
 * @size: Number of elements in @array
 * Return: Pivot index
 */
int partition(int *array, int low, int high, size_t size)
{
int pivot = array[high];
int i, j;
i = low - 1;
for (j = low; j < high; j++)
{
if (array[j] <= pivot)
{
i++;
sp(&array[i], &array[j]);
if (i != j)
print_array(array, size);
}
}
sp(&array[i + 1], &array[high]);
if (high != (i + 1))
print_array(array, size);
return (i + 1);
}
/**
 * quicks - sorts an array of integers in ascending order
 * @array: The array to be sorted
 * @low: low value
 * @high: high value
 * @size: Number of elements in @array
 */
void quicks(int *array, int low, int high, size_t size)
{
int pivot;
if (low < high)
{
pivot = partition(array, low, high, size);
quicks(array, low, pivot - 1, size);
quicks(array, pivot + 1, high, size);
}
}
/**
 * quick_sort - sorts an array of integers in ascending order
 *
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */
void quick_sort(int *array, size_t size)
{
quicks(array, 0, size - 1, size);
}
