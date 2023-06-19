#include "dog.h"
#include <stdio.h>
/**
 *  print_dog - check function
 * @d: pointer to dog
 * Description:  a function that prints a struct dog
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
d->name = "(nil)";
if (d->owner == NULL)
d->owner = "(nil)";
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);

}
