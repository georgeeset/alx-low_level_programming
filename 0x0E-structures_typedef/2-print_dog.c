#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: struct dog to be printed
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: ");
	if ((*d).name == NULL)
		printf("nil\n");
	else
		printf("%s\n", (*d).name);
	printf("Age: ");
	printf("%f\n", (*d).age);
	printf("Owner: ");
	if ((*d).owner == NULL)
		printf("nil");
	else
		printf("%s", (*d).owner);
}
