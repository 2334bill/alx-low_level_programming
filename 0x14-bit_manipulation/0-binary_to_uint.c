#include <ctype.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
* power - Calculate the power of a number.
* @number: The base number.
* @exponent: The exponent.
*
* Return: The result of number raised to the exponent.
*/
double power(double number, int exponent)
{
int i;
if (exponent == 0)
{
return 1.0;
}
else if (exponent > 0)
{
double result = 1.0;
for (i = 0; i < exponent; i++)
{
result *= number;
}
return result;
}
else
{
double result = 1.0;
for (i = 0; i < -exponent; i++)
{
result /= number;
}
return result;
}
}
/**
*binary_to_uint - this is a program that changes  binary to decimal
*@b: this is where the array of 0s and 1s are kept
*Return: the original number
*/
unsigned int binary_to_uint(const char *b)
{
int len;
int bitvalue;
int decimal;
int i;
len = strlen(b);
decimal = 0;
for (i = len - 1; i >= 0; i--)
{
if (b[i] == '0' || b[i] == '1')
{
bitvalue = (b[i] - '0') * (int)power(2, len - 1 - i);
decimal += bitvalue;
}
else
{
return (0);
}
}
return (decimal);
}
