#include "main.h"
int check_pal(char *s, int i, int len);
int strlen_recursion(char *s);
/**
*is_palindrome - check if its a
*@s: string to reverse
*Return: 1 if its , 0 its not
*/
int is_palindrome(char *s)
{
if (*s == 0)
{
return (1);
}
return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
*_strlen_recursion - yes
*@s: string
*Return: lenght
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
/**
*check_pal - check
*@s:string
*@i: iterator
*@len: lenth
*Return: length
*/
int check_pal(char *s, int i, int len)
{
if (*(s + i) != *(s + len - 1))
{
return (0);
}
if (i >= len)
{
return (1);
}
return (check_pal(s, i + 1, len - 1));
}
