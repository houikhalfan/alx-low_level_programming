#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 * @d: input
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;

if (d->name == NULL)
printf("Name: %s\n", d->name);
else
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
if (d->owner == NULL)
printf("Owner: %s\n", d->owner);
else
printf("Owner: %s\n", d->owner);
}
