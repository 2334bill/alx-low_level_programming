#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
*str_concat - mix two strings
*@s1: first string
*@s2: second string
*Return: nothing
*/
char *str_concat(char *s1, char *s2)
{
char *array;
int i;
int len1;
int len2;
i = 0;
len1 = strlen(s1);
len2 = strlen(s2);
array = malloc((len1 + len2 + 2) * sizeof(char));
for (i = 0; i < (len1 + len2); i++)
{
array[i] = s1[i];
array[i + len1] = s2[i];
}
return (array);
}
