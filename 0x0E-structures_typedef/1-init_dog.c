#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
*struct dog - yyy
*@name:YYY
*@age:YYY
*@owner:YYY
*Return:YYY
*/
struct dog
{
char *name;
float age;
char *owner;
};
/**
* init_dog - initializes the elements of the struct
* @d: pointer to struct
* @name: name
* @age: age
* @owner: owner
*
* Return: nothing
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = malloc(strlen(name) + 1);
strcpy(d->name, name);
d->age = age;
d->owner = malloc(strlen(owner) + 1);
strcpy(d->owner, owner);
}
