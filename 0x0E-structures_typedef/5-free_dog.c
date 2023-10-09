#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog_t struct.
 * @d: A pointer to the dog_t struct to free.
 *
 * Description: This function frees the memory allocated for a dog_t struct,
 * including the memory allocated for the name and owner strings.
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
