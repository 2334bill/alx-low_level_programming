#include <stdio.h>
#include <stdlib.h>
/**
*malloc_checked - this is for simply allocating mem
*@b: the size of the int
*Return: ptr to mem
*/
void *malloc_checked(unsigned int b)
{
int *size;
size = malloc(b);
if (size == NULL)
{
exit(98);
}
return (size);
}
