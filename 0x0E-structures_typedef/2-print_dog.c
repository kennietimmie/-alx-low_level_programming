#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Print info of a dog struct
 * @d: pointer to dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (Nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (d->age)
			printf("Age: (Nil)\n");
		else
			printf("age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (Nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}

