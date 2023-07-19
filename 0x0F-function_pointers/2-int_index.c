#include <stdlib.h>
/**
*int_index - does some shit
*@array: the array
*@size: the size of the array
*@cmp: the function that does some shit
*Return: integer return type
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size == 0 || cmp == 0 || array == NULL)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if(cmp(array[i]))
return (i);
}
return (-1);
}
