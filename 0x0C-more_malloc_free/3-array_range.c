#include <stdlib.h>
/**
* array_range - Creates an array of integers from min to max (inclusive).
* @min: The minimum value.
* @max: The maximum value.
* Return: Pointer to the newly created array, or NULL if min > max or if malloc fails.
*/
int *array_range(int min, int max)
{
int i;
int *arr;
if (min > max)
{
return (NULL);
}
arr = malloc(sizeof(int) * (max - min + 1));
if (arr == NULL)
{
return (NULL);
}
for (i = 0; min <= max; i++, min++)
{
arr[i] = min;
}
return (arr);
}
