#include <stdlib.h>
/**
* _realloc - Reallocates a memory block using malloc and free.
*
* @ptr: Pointer to the memory previously allocated with malloc.
* @old_size: Size, in bytes, of the allocated space for ptr.
* @new_size: New size, in bytes, of the new memory block.
*
* Return: Pointer to the reallocated memory block, or NULL on failure or if new_size is 0.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
char *src;
char *dest;
unsigned int i;
unsigned int copy_size;
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (new_size == old_size)
{
return (ptr);
}
new_ptr = malloc(new_size);
if (new_ptr == NULL)
{
free(ptr);
return (NULL);
}
if (ptr != NULL)
{
copy_size = old_size < new_size ? old_size : new_size;
src = ptr;
dest = new_ptr;
for (i = 0; i < copy_size; i++)
{
dest[i] = src[i];
}
free(ptr);
}
return (new_ptr);
}
