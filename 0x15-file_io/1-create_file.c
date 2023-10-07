#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
*create_file - this is program that creates a file
*@filename:this the file where we are going to put
*@text_content:this is the file containing the content we are going to print
*Return: 1 on success and -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
ssize_t w;
char *buffer;
int outsize;
buffer = (char *)malloc(strlen(text_content) + 1);
if (buffer == NULL)
{
return (-1);
}
outsize = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
if (outsize == -1)
{
free(buffer);
return (-1);
}
strcpy(buffer, text_content);
w = write(outsize, buffer, strlen(text_content));
if (w == -1)
{
close(outsize);
free(buffer);
return (-1);
}
close(outsize);
free(buffer);
return (1);
}
