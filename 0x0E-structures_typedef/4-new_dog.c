#include <stdlib.h>
#include "dog.h"

/**
*_strdup - Duplicates a string.
*@str: string to duplicate.
*
*Return: A pointer to the newly allocated string, or NULL on failure.
*/
char *_strdup(char *str)
{
unsigned int men;
unsigned int i;
char *ptr;
if (str == NULL)
return (NULL);
men = 0;
while (str[men] != '\0')
men++;
ptr = malloc((men +1) *sizeof(char));
if (ptr == NULL)
return (NULL);
for (i = 0; i < men; i++)
ptr[i] = str[i];
return (ptr);
}

/**
*new_dog - Create a new dog.
*@name: dogs name
*@age: dogs age
*@owner: dogs owner
*
*Return: Pointer to new dog.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
if (name == NULL || owner == NULL)
return (NULL);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = _strdup(name);
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = _strdup(owner);
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
dog->age = age;
{
return (dog);
}
}
