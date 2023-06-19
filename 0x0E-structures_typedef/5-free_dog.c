# include <stdlib.h>
# include "dog.h"

/**
 * free_dog - Function that frees the memory allocated for the dog struct
 * @d: pointer to the old struct
 */

void free_dog(dog_t *d)
{
	if (d->name == NULL || d->owner == NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
