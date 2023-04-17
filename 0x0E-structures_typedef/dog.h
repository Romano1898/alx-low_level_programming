#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A new type describing a dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 */

struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
