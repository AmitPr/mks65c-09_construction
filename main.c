#include "animal.h"
#include "animal.c"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    char animal_name[12] = "Hippopotamus";
    struct Animal *hippo;
    hippo = new_animal(animal_name, rand() % 100, 5);
    print_animal(hippo);
    mutate(hippo);
    print_animal(hippo);
    return 0;
}