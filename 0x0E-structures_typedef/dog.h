#ifndef __DOG_H__
#define __DOG_H__

/**
 * struct dog - A dog basics info
 *
 * @name: The name of the dog
 * @owner: The owner of the dog
 * @age: The age of the dog
 *
 * Description: A dog basics info
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
