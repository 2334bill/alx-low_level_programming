#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
*print_numbers - prints numbers
*@separator: this is the comma
*@n: this is no. of arguments
*Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned  int i;
va_list args;
va_start(args, n);
if (separator != NULL)
{
for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));
if (i < n - 1)
{
printf("%s ",separator);
}
}
printf("\n");
}
else
{
printf("\n");
}
