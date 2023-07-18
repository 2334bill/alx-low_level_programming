#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
*struct dog - for a dog
*@name:name
*@age:age
*@owner:owner
*Return: nothing
*/
typedef struct dog
{
char *name;
int age;
char *owner;
}my_dog;
/**
*init_dog - initializes the elemnts od the struct
*@name:name
*@age: age
*@owner:owner
*@d: pointer to struct
*Return:nothing
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = malloc(strlen(name)+1);
strcpy(d->name, name);
 
d->age = age;
 
d->owner = malloc(strlen(owner)+1);
strcpy(d->owner, owner);
}
