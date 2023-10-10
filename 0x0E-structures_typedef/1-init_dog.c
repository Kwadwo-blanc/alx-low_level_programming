#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - Initializes a struct dog.
 * @d: A pointer to the struct dog variable to initialize.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description: This function initializes the fields of a struct dog with the
 * provided values for name, age, and owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
