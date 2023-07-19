#include <stdlib.h>
/**
*print_name - prints a name
*@name:the name to be printed
*@f: the function that is going to print it
*Return: nothing since its void
*/
void print_name(char *name, void (*f)(char *))
{
f(name);
}
