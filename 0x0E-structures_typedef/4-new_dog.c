#include <stddef.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Returns the length of a string.
 * @s: String to evaluate.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}

/**
 * _strcpy - Copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest.
 * @dest: Pointer to the buffer in which we copy the string.
 * @src: String to be copied.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
int men;
int i;
men = 0;
while (src[men] != '\0')
{
men++;
}
for (i = 0; i < men; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}

/**
 * new_dog - Creates a new dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: Pointer to the new dog (Success), NULL otherwise.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int men1;
int men2;

men1 = _strlen(name);
men2 = _strlen(owner);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (men1 + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (men2 + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}
