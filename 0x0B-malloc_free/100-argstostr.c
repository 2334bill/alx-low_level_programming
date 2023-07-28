#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
*argstostr - this is for concaitnating the arguments
*@ac: argc
*@av: argv
*Return: the arguments
*/
char *argstostr(int ac, char **av)
{
int i;
int n;
int r;
int l;
char *str;
r = 0;
l = 0;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (n = 0; av[i][n]; n++)
{
l++;
}
}
l += ac;
str = malloc(sizeof(char) * l + 1);
if (str == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (n = 0; av[i][n]; n++)
{
str[r] = av[i][n];
r++;
}
if (str[r] == '\0')
{
str[r++] = '\n';
}
}
return (str);
}
