# include "dog.h"
# include <string.h>
# include <stdlib.h>

/**
 * new_dog - Function that creates new dog struct
 * @name: name of dog
 * @age: age of dog in double type
 * @owner: pointer to string contining name of owner
 * Return: 'd' Success
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL || name == NULL || owner == NULL)
	{
		return (NULL);
	}

	d->name = malloc(strlen(name) + 1);
	d->owner = malloc(strlen(owner) + 1);

	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);

	return (d);
}
