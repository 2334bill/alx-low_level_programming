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
char **name;
if (ac == 0 || av == NULL)
{
return (NULL);
}
name = malloc(ac * sizeof(char *));
name = av;
for (i = 0; i < ac; i++)
{
printf("%s\n", name[i]);
}
free(name);
return (* name);
}
