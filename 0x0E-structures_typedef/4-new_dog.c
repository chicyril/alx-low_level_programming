#include <stdlib.h>
#include "dog.h"

/**
 * buffcpy - copy string
 * @dest: to
 * @src: from
 * @n: number of strings to copy
 *
 */
void buffcpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[i] = src[i];
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to typee dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nam_len, own_len;
	dog_t *dog = NULL;

	if (name == NULL || owner == NULL)
		return (NULL);
	for (nam_len = 0; name[nam_len]; nam_len++)
		;
	for (own_len = 0; owner[own_len]; own_len++)
		;
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = NULL;
	dog->name = malloc(sizeof(char) * (nam_len + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = NULL;
	dog->owner = malloc(sizeof(char) * (own_len + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	buffcpy(dog->name, name, nam_len);
	buffcpy(dog->owner, owner, own_len);
	dog->age = age;
	return (dog);
}
