#include <stdlib.h>
#include <string.h>
/**
* _calloc - Allocates memory for an array using malloc.
*
* @nmemb: The number of elements in the array.
* @size: The size of each element in bytes.
*
* Return: A pointer to the allocated memory, or NULL if nmemb or size is 0
*         or if malloc fails.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
memset(ptr, 0, nmemb * size);
return (ptr);
}
