#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialises a variable of type dog
 *
 * struct dog - Defines data type dog
 * @d: Dog to be initalised
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of the dog
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
