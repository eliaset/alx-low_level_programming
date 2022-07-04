#include <stdlib.h>
#include "doh.h"
/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: struct dog.
 * if fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *tmp;
	int i, nn, no;

	tmp = malloc(sizeof(*tmp));
	if (tmp == NULL || !(name) || !(owner))
	{
		free(tmp);
		return (NULL);
	}

	for (nn = 0; name[nn]; nn++)
		;

	for (no = 0; owner[no]; no++)
		;

	tmp->name = malloc(nn + 1);
	tmp->owner = malloc(no + 1);

	if (!(tmp->name) || !(tmp->owner))
	{
		free(tmp->owner);
		free(tmp->name);
		free(tmp);
		return (NULL);
	}

	for (i = 0; i < nn; i++)
		tmp->name[i] = name[i];
	tmp->name[i] = '\0';

	tmp->age = age;

	for (i = 0; i < no; i++)
		tmp->owner[i] = owner[i];
	tmp->owner[i] = '\0';

	return (tmp);
}
