#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog object
 *	@name: dog name.
 *	@age: dog age.
 *	@owner: dog owner.
 * init_dog -  initialize a variable of type struct dog.
 * print_dog -  prints a struct dog.
 * new_dog - creates a new dog.
 * free_dog -  free dogs.
*/

typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
