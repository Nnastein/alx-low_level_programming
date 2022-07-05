#include <stdio.h>
#include "dog.h"

/**
 * init_dog -  function that initialize a variable of type str dog
 * @d: 1st
 * @name: 2nd
 * @age: 3rd
 * @owner: 4th
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
