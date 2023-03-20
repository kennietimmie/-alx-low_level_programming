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
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (d->age)
			printf("Age: %.6f\n", d->age);
		else
			printf("Age: %.6f\n", 0);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}

