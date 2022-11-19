#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "estrategiaA.h"

void estrategiaA_ctor (estrategiaA * const me)
{
    estrategia_ctor(&me->super);

    printf("aca se implementa estrategia A \n");
}

