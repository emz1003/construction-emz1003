#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "construction.h"

struct building example(){
    srand(time(NULL));
    struct building tower;
    char *nyc[3];
    nyc[0] = "freedom tower";
    nyc[1] = "empire state";
    nyc[2] = "chrysler";
    
    tower.name = nyc[rand() % 3];
    tower.floors = rand() % 100;
    return tower;
}

void printBuilding(struct building *x) {
    printf("building %s is %d stories tall\n", x->name, x->floors);
}

void modifyBuilding(struct building *b, char *name, int floors) {
    b->name = name;
    b->floors = floors;
}