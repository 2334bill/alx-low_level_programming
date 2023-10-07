#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
*append_text_to_file - this is program that simply appends a sting to another
*@filename:initial content
*@text_content:content to be added
*Return: pass 1 fail -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
ssize_t o, w;
o = open(filename, O_WRONLY | O_APPEND);
if (o == -1)
{
return (-1);
}
w = write(o, text_content, strlen(text_content));
if (w == -1)
{
close(o);
return (-1);
}
close(o);
return (1);
}
