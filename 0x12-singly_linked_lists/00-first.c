#include <stdio.h>

/**
 * _constr - constructor
 */
void _constr(void) __attribute__((constructor));

/**
 *_constr - implementaton
 */
void _constr(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
