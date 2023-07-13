#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
*_strdup - copies the string
*@str: the old string
*Return:nothing
*/
char *_strdup(char *str)
{
char *array;
size_t len;
if (str == NULL)
{
return (NULL);
}
len = strlen(str);
array = malloc((len + 1) * sizeof(char));
if (array == NULL)
{
return (NULL);
}
strcpy(array, str);
return (array);
}
