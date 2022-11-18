#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef  ESTRATEGIAA_H
#define ESTRATEGIAA_H

#include "strategy.h"
typedef struct 
{
    strategy super;
    char estrategias;
    
} orden; 

void orden_ctor(strategy * const me, estrategias);

#endif