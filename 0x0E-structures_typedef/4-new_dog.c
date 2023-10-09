#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 * Description: About the dog
 *
 * Return: Pointer to the new dog (Success), NULL otherwise.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
int m;

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);
new_dog->name = malloc(sizeof(name) + 1);
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}
new_dog->owner = malloc(sizeof(owner) + 1);
if (new_dog->owner == NULL)
{
free(new_dog);
free(new_dog->name);
return (NULL);
}
for (i = 0; name[i]; i++)
new_dog->name[i] = name[i];
new_dog->name[i] = '\0';
new_dog->age = age;
for (i = 0; owner[i]; i++)
new_dog->owner[i] = owner[i];
new_dog->owner[i] = '\0';
return (new_dog);
}
