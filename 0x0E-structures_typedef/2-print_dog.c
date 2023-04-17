#include <stdlib.h>
#include "dog.h"
#include <stdio.h>


void print_dog(struct dog *d)
{
if (d == NULL)
return;

if (d->name == NULL)
print("Name: %s\n", d->name);
else
print("Name: %s\n", d->name);
if (d->age == NULL)
print("Age: %s\n", d->age);
else
print("Age: %s\n", d->age);
if (d->owner == NULL)
print("Owner: %s\n", d->owner);
else
print("Owner: %s\n", d->owner);
}
