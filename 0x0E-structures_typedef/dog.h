#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - struct that stores properties of a dog
 * @name: name proterty of dog
 * @age: age of dog
 * @owner: name of dog owner
 * Description: this structure called dog stores info
 * about dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
