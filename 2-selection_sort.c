#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order
 *
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */
void selection_sort(int *array, size_t size)
{
size_t i, j, tmp, min;

if (size < 2)
return;
for (i = 0; i < size - 1; i++)
{
min = i;
for (j = i + 1; j < size; j++)
{
if (array[j] < array[min])
{
min = j;
}
}
if (min != i)

{
tmp = array[i];
array[i] = array[min];
array[min] = tmp;
print_array(array, size);
}
}

}
