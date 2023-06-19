# ifndef DOG_H
# define DOG_H

# include <stdio.h>
# include <stdlib.h>

/**
 * struct dog - The struct for dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of dog's owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

# endif
