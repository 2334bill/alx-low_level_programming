#include <unistd.h>
/**
*this is my own putchar
*/
int _putchar(char c)
{
return write(STDOUT_FILENO, &c, 1);
}
