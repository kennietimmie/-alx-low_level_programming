#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A dog struct
 * @name: name of dog
 * @age: dog's age
 * @owner: dog's owner name
 *
 * Description: a struct containing dog properties
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
