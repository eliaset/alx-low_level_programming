#include "dog.h"
#include <stdlib.h>
/**
  * new_dog - creates a new struct of type dog
  * @name: struct parameter name
  * @age: struct parameter age
  * @owner: struct parameter owner
  * Return: returns pointer to buffer of datatype dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	int tmp1, tmp2, i;
	dog_t *doggy;

	tmp1 = tmp2 = 0;
	while (name[tmp1++])
		;
	while (owner[tmp2++])
		;
	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(tmp1 * sizeof(doggy->name));
	if (doggy == NULL)
		return (NULL);
	for (i = 0; i < tmp1; i++)
		doggy->name[i] = name[i];

	doggy->age = age;

	doggy->owner = malloc(tmp2 * sizeof(doggy->owner));
	if (doggy == NULL)
		return (NULL);
	for (i = 0; i < tmp2; i++)
		doggy->owner[i] = owner[i];
	return (doggy);
}
