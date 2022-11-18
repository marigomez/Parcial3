#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef STRATEGY_H
#define STRATEGY_H

#include "estrategias.h"

typedef struct strategy
{
   char estrategias;
}; estrategiaA;

void estrategia_x(strategy* const me, estrategias);

#endif

struct StrategyVtbl;
typedef struct 
{
    struct StrategyVtbl const *vptr;
    estrategia_x;
        
} estrategias;

struct estrategiaVtbl
{
    char (*orden) (estrategias const * const me);
    char (*imprimir) (estrategias const * const me);
};

void estrategia_ctor(estrategias * const me);

static inline char organizar_A(strategy const * const me)
{
    (*me->vptr->Organizar)(me);
}
static inline char imprimir_A(strategy const * const me)
{
    (*me->vptr->imprimir)(me);
}


#endif 
