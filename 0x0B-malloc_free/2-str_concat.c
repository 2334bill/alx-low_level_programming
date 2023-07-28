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
int i;
int k;
int j;
int l;
char *s;
j = 0;
i = 0;
k = 0;
l = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[i])
{
i++;
}
while (s2[j])
{
j++;
}
l = i + j;
s = malloc((sizeof(char) * l) + 1);
if (s == NULL)
{
return (NULL);
}
while (k < l)
{
if (k < i)
{
s[k] = s1[k];
}
else
{
s[k] = s2[k - i];
}
k++;
}
s[k] = '\0';
return (s);
}
