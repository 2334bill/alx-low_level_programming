#include <stdarg.h>
#include <stdio.h>
/**
*print_all - prints all
*@format: nice
*Return: nothing
*/
void print_all(const char * const format, ...)
{
va_list list;
const char *format_ptr;
const char *sep;
char *str;
if (!format)
return;
format_ptr = format;
va_start(list, format);
sep = "";
while (*format_ptr)
{
switch (*format_ptr)
{
case 'c':
printf("%s%c", sep, va_arg(list, int));
break;
case 'i':
printf("%s%d", sep, va_arg(list, int));
break;
case 'f':
printf("%s%f", sep, va_arg(list, double));
break;
case 's':
str = va_arg(list, char *);
if (!str)
str = "(nil)";
printf("%s%s", sep, str);
break;
default:
break;
}
sep = ", ";
format_ptr++;
}
va_end(list);
printf("\n");
}
