#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes a variable of type struct dog.
 * @d: pointer to struct
 * @name: parameter of name of the dog
 * @age: parameter of age of the dog
 * @owner: pinter parameter to owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
		if (d == NULL)
		{
			return;
		}
		d->name = name;
		d->age = age;
		d->owner = owner;
}
