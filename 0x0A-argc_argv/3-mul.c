#include <stdio.h>
#include <stdlib.h>
/**
*main - multiplies the parameters
*@argc: no.
*@argv: arguments
*Return: nothing
*/
int main(int argc, char **argv)
{
if (argc == 3)
{
int mul;
int num1;
int num2;
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
mul = num1 *num2;
printf("%d\n", mul);
}
else
{
printf("Error\n");
return (0);
}
return (0);
}
