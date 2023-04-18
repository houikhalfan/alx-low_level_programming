#include <stdlib.h>
#include "main.h"

/**
 * free_dog -  function that frees dogs.
 * @d: input
 */
void free_dog(dog_t *d)
{
free(d->name);
free(d->owner);
free(d->age);
free(d);
}
