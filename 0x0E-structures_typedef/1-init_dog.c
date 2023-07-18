#include "dog.h"
#include <stdlib.h>
/**
 * init_dog -  initialize a variable of type struct dog.
 *
 * @d: The dog object.
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner.
 *
 * Return: On success 1.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;

}
