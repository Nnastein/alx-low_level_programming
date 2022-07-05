#ifndef DOG_H
#define DOG_H
int _putchar(char c);
/**
 * struct dog - first struct
 * @name: 1st mem
 * @age: 2nd mem
 * @owner: 3rd mem
 *
 * Description: Basic struct
 */ 
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
