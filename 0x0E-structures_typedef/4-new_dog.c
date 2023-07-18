#include "dog.h"
#include <string.h>
/**
 * new_dog - creates a new dog.
 *
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner.
 *
 * Return: dog object, NULL if fails.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	strcpy(name, "*name");
	new_dog.age = age;
	strcpy(owner, "owner");
}
