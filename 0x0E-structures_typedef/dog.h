#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Basic information about a dog
 * @name: First member - The name of the dog
 * @age: Second member - The age of the dog
 * @owner: Third member - The owner of the dog
 *
 * Description: This structure holds basic information about a dog, including its name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
