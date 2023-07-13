#include <stdio.h>
#include <stdlib.h>
/**
*_strdup - copies the string
*@str: the old string
*Return:nothing
*/
char *_strdup(char *str)
{
char *array;
int i;
i = 0;
if (str != NULL)
{
i++;
}
array = (char *)malloc(i *sizeof(char));
if (str == NULL)
{
return (NULL);
}
else
{
array = str;
return (array);
}
free(array);
}
