#ifndef DOG_HEADER
#define DOG_HEADER
void init_dog(struct dog *d, char *name, float age, char *owner);
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
#endif
