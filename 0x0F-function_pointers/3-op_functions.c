#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
*op_add   - returns
*@a: first
*@b: second
*Return: nothing
*/
int op_add(int a, int b)
{
return (a + b);
}
/**
*op_sub  - returns
*@a: first
*@b: second
*Return: nothing
*/
int op_sub(int a, int b)
{
return (a - b);
}
/**
*op_mul   - returns
*@a: first
*@b: second
*Return: nothing
*/
int op_mul(int a, int b)
{
return (a * b);
}
/**
*op_div - returns
*@a: first
*@b: second
*Return: nothing
*/
int op_div(int a, int b)
{
return (a / b);
}
/**
*op_mod  - returns
*@a: first
*@b: second
*Return: nothing
*/
int op_mod(int a, int b)
{
return (a % b);
}



