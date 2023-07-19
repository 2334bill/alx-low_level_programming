#include <stdio.h>
#include <stdlib.h>
/**
* main - prints
* @argc: arguments count
* @argv: arguments themselves
* Return: 0
*/
int main(int argc, char *argv[])
{
int bytes;
int i;
unsigned char *arr;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error\n");
exit(2);
}
arr = malloc(bytes);
if (arr == NULL)
{
printf("Error\n");
exit(3);
}
for (i = 0; i < bytes; i++)
{
arr[i] = ((unsigned char *)&main)[i];
if (i == bytes - 1)
{
printf("%02x\n", arr[i]);
break;
}
printf("%02x", arr[i]);
}
free(arr);
return (0);
}
