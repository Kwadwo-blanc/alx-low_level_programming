#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog_t struct.
 * @d: A pointer to the dog_t struct to free.
 *
 * Description: function frees the memory allocated for a dog_t struct.
 * 
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return;
if (d->name != NULL)
free(d->name);
if (d->owner != NULL)
free(d->owner);
free(d);
}
}
