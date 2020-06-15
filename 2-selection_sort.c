#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order
 *
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */
void selection_sort(int *array, size_t size)
{
size_t i;
int j, tmp;
if (size < 2)
return;
for (i = 0; i < size; i++)
{
tmp = array[i];
j = i - 1;
while (j >= 0 && array[j] > tmp)
{
array[j + 1] = array[j];
j = j - 1;
array[j + 1] = tmp;
}
}
}
