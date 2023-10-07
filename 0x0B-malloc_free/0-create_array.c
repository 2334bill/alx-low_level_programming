s#include<stdio.h>
#include<stdlib.h>
/**
*create_array - creates an array
*@size: soze of the array
*@c: the contents of the array
*Return:nothing
*/
char *create_array(unsigned int size, char c)
{
char *array = (char *)malloc(size * sizeof(char));
if (array != NULL && size > 0)
{
unsigned int i;
for (i = 0; i < size; i++)
{
array[i] = c;
}
}
else
{
return (NULL);
}
return (array);
}
