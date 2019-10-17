#include <stdio.h>
#include <stdlib.h>

struct building
{
    char *name;
    int floors;
};

struct building example();
void printBuilding(struct building *x);
void modifyBuilding(struct building *b, char *name, int floors);