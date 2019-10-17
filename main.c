#include <stdio.h>
#include <stdlib.h>

#include "construction.h"

int main()
{
    struct building ex = example();
    printBuilding(&ex);
    modifyBuilding(&ex, "chrysler", 77);
    printBuilding(&ex);
    return 0;
}