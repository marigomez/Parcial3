#ifndef STRATEGY_H
#define STRATEGY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct StrategyVtbl;
typedef struct
{
   struct StrategyVtbl const *vptr;
}Istrategy;

struct StrategyVtbl
{
    void (*algoritmo) (Istrategy const * const me);
   
};

static inline void do_algoritmo (Istrategy const * const me)
{
    (*me->vptr->algoritmo) (me);
}

#endif 
