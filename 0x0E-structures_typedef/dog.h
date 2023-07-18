#ifndef HUN_H
#define HUN_H
#include <stdlib.h>
#include <stdio.h>
/**
*struct dog - details of the dog
*@name: name
*@age: age of the dog
*@owner: owner
*Return: nothing
*/
typedef struct dog
{
char *name;
float age;
char *owner;
}
my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
