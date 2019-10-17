#include <stdio.h>
#include <stdlib.h>

#include "construction.h"

int main()
{
    struct building ex = example();
    printBuilding(&ex);
    modifyBuilding(&ex, "chrystler", 77);
    printBuilding(&ex);
    return 0;
}