#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints a struct dog.
 * @d: A pointer to the struct dog to print.
 *
 * Description: This function prints the contents of a struct dog.
 * If an element of the struct is NULL, it prints "(nil)" instead.
 * If the struct pointer itself is NULL, it prints nothing.
 */

void print_dog(struct dog *d)
{
if (d)
{
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %.6f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
}
