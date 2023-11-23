#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strcpy - Copies a string from source to destination.
 * @dest: The destination buffer.
 * @src: The source string.
 *
 * Return: A pointer to the destination buffer.
 */
char *_strcpy(char *dest, const char *src)
{
	char *original_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (original_dest);
}

/**
 * _strlen - Computes the length of a string.
 * @str: The input string.
 *
 * Return: The length of the string.
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}

	return (length);
}

/**
 * new_dog - Dynamically allocates memory for a new dog structure and
 * initializes its members.
 * @name: Pointer to a character array representing the name of the dog.
 * @age: Floating-point value representing the age of the dog.
 * @owner: Pointer to a character array representing the owner of the dog.
 *
 * Return: If successful, returns a pointer to the newly created and
 * initialized dog structure. If any of the input parameters (name or owner)
 * is NULL or if memory allocation fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;

	if (name == NULL || owner == NULL)
		return (NULL);

	nd = malloc(sizeof(dog_t));

	if (nd == NULL)
		return (NULL);

	nd->age = age;
	nd->name = malloc(sizeof(char) * (_strlen(name) + 1));
	nd->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (nd->name == NULL || nd->owner == NULL)
	{
		free(nd->name);
		free(nd->owner);
		free(nd);
		return (NULL);
	}

	_strcpy(nd->name, name);
	_strcpy(nd->owner, owner);

	return (nd);
}
