#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: input
 * @age: input
 * @owner: input
 * @name: input
 * Return: a viriable of type struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d = malloc(sizeof(struct dog));
if (d == NULL)
return (NULL);
d->name = name;
d->age = age;
d->owner = owner;
return (d);
}
