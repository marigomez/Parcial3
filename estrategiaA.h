#ifndef  ESTRATEGIAA_H
#define ESTRATEGIAA_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#include "strategy.h"

typedef struct 
{
    Istrategy super;
      
} estrategiaA; 

void estrategiaA_ctor(estrategiaA * const me);

#endif