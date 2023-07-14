#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
*string_nconcat - this is for concatination
*@s1: first half
*@s2: second half
*@n: part of s2
*Return: the whole string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len;
unsigned int i;
char *array;
unsigned int j;
if (s1 == NULL || s2 == NULL)
{
return (NULL);
}
len = strlen(s1);
array = malloc((n + len)*sizeof(char));
if (array == NULL)
{
return (NULL);
}
for (i = 0; i < (n + len); i++)
{
array[i] = s1[i];
for (j = 0; j < n; j++)
{
array[i + len] = s2[j];
}
}
return (array);
}
