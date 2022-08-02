#include "dog.h"

/**
 * init_dog - initialize a variable of type structure
 * @d: pointer to a structure
 * @name: character
 * @age: float
 * @owner: character
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)

	{
		d->name = name;
		d->age = age;
		d->owner = owner;

	}
	else
		return;
}
