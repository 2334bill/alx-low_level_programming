#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
*main - this adds all the positive integers
*@argv: vector
*@argc: count
*Return: nothing
*/
int main(int argc, char **argv)
{
if (argc > 1)
{
int i;
int sum;
sum = 0;
for (i = 1; i < argc; i++)
{
if (atoi(argv[i]) > 0 && isdigit(*argv[i]))
{
sum += atoi(argv[i]);
}
else
{
printf("Error\n");
return (0);
}
}
printf("%d\n", sum);
return (0);
}
else
{
printf("0\n");
return (0);
}
return (0);
}
