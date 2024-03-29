#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: Dogs name
 * @age: Dogs age
 * @owner: Dogs owner
 * Description: for all descriptions
 *
 * Return: return(0) Success
 */

struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
/* rest of the functions */
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strdup(char *str);

#endif /* DOG_H */
