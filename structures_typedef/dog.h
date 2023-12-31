#ifndef DOG_HEADER
#define DOG_HEADER
/**
 *struct dog - structure for a new type
 *@name: Char
 *@age: Float
 *@owner: Char
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
