#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "animal.h"
void print_animal(struct Animal *x)
{
    printf("Animal{ name: %s, age: %d, number of legs: %d }\n", x->name, x->age, x->number_of_legs);
}

struct Animal *new_animal(char n[], int a, int legs)
{
    struct Animal *na = malloc(sizeof(struct Animal));
    strncpy(na->name,n,sizeof(na->name)-1);
    na->age=a;
    na->number_of_legs=legs;
}
void mutate(struct Animal *x)
{
    x->number_of_legs++;
}