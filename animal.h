#ifndef ANIMAL
#define ANIMAL
struct Animal {
    char name[80];
    int age;
    int number_of_legs;
};
void print_animal(struct Animal*);
struct Animal* new_animal(char n[], int a, int legs);
void mutate(struct Animal*);
#endif