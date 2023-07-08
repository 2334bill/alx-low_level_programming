#include "main.h"
/**
*is_prime_number - check if a number is a prime number
*@n: the number being checked
*Return: -1 or 1 depending on case
*/
int is_prime_number(int n)
{
if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
{
return (0);
}
else if (n <= 1)
{
return (0);
}
else
{
return (1);
}
}
