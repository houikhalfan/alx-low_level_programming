#ifndef DOG_FILE
#define DOG_FILE

#include <stdio.h>
#include <stdlib.h>

/**
 * dog - a type
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 */

struct dog
{
char *name;
float age;
char *owner;
};
#endif
