#include "search_algos.h"
/**
 *print_array - function that prints the given array
 *@array: pointer to the first element of the array to search in
 *@beg: index of the first element of the array
 *@end: index of the last element of the array
 *Return: Nothing
 */
void print_array(int *array, size_t beg, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = beg ; i <= end; i++)
	{
	printf("%d", array[i]);
	if (i < end)
	printf(", ");
	}
	printf("\n");
}

/**
*binary_search - function that searches for a value in a
* sorted array of integers using the Binary search algorithm
*@array: pointer to the first element of the array to search in
*@size: number of elements in array
*@value: value to search for
*Return: index where value is located
*/
int binary_search(int *array, size_t size, int value)
	{
	size_t  mid;
	size_t beg = 0;
	size_t end;

	if (array == NULL)
	return (-1);
	end = size - 1;
	mid = (beg + end) /  2;
	print_array(array, beg, end);
	while (array[mid] != value && beg != end)
	{
	if (value < array[mid])
	{
	end = mid - 1;
	print_array(array, beg, end);
	}
	else if (value > array[mid])
	{
	beg = mid + 1;
	print_array(array, beg, end);
	}
	mid = (beg + end) /  2;
	}
	if (array[mid] == value)
	return (mid);
	else
	return (-1);
	}
