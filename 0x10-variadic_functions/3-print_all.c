#include <stdio.h>
#include <stdarg.h>
/**
* print_all - prints anything based on the format specifier.
* @format: a list of types of arguments passed to the function.
*/
void print_all(const char * const format, ...)
{
char c;
int i;
float f;
char *s;
const char *fmt_ptr;
va_list args;
va_start(args, format);
fmt_ptr = format;
while (fmt_ptr && *fmt_ptr)
{
c = *fmt_ptr;
switch (c)
{
case 'c':
i = va_arg(args, int);
printf("%c", i);
break;
case 'i':
i = va_arg(args, int);
printf("%d", i);
break;
case 'f':
f = (float)va_arg(args, double);
printf("%f", f);
break;
case 's':
s = va_arg(args, char *);
if (s == NULL)
printf("(nil)");
else
printf("%s", s);
break;
default:
break;
}
fmt_ptr++;
if (*fmt_ptr && (c == 'c' || c == 'i' || c == 'f' || c == 's'))
printf(", ");
}
printf("\n");
va_end(args);
}
