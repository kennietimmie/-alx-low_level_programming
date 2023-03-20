#include "dog.h"

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
			 printf("Name: %s", d->name);
		 if (d->age)
			 printf("Age: (Nil)\n");
		 else
			 printf("age: %f", d->age);
		 if (d->owner == NULL)
			 printf("Owner: (Nil)\n");
		 else
			 printf("Owner: %s", d->owner);
	 }
 }
		 
