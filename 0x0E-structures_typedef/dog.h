#ifndef DOG_H
#define DOG_H

/**
 *	* struct dog - vital info
 *	* @name: first element
 *	* @age: second element
 *	* @owner: third element
 *	* Description:long
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 *	* dog_t - defines struct
 */

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
