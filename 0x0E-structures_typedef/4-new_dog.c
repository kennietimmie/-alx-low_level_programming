#include "dog.h"
#include <stdlib.h>
#include <strings.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: NULL or dog_t pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	if (n_dog == NULL)
		return (NULL);
	if (name != NULL && owner != NULL)
	{
		n_dog = malloc(sizeof(dog_t));
		n_dog->name = malloc(sizeof(char) * strlen(name));
		n_dog->owner = malloc(sizeof(char) * strlen(owner));

		if (n_dog->owner == NULL || n_dog->name == NULL || n_dog == NULL)
		{
			free(n_dog->name);
			free(n_dog->owner);
			free(n_dog);
		}
		n_dog->name = strcpy(n_dog->name, name);
		n_dog->owner = strcpy(n_dog->owner, owner);
		n_dog->age = age;

		return (n_dog);
	}
	return (NULL);
}

