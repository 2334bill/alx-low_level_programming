#include <stdlib.h>
/**
*array_iterator - this for
*@array: the array
*@size: size of the array
*@action: action done
*Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
