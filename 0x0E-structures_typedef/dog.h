# ifndef MAIN_H
# define MAIN_H

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
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

# endif
