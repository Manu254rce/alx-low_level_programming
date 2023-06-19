# include "dog.h"

/**
 * init_dog - Function that initializes the dog struct
 * @struct dog *d: the dog struct
 * @d: variable name
 * @name: the name of our dog
 * @age: the age of our dog
 * @owner: the name of owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age =  age;
	d->owner = owner;
}
