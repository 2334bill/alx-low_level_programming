#include <stdio.h>
#include <stdlib.h>
/**
*main - prints all the arguments
*@argv: the arguments
*@argc: the number of arguments
*Return: nothing
*/
int main(int argc, char **argv)
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
