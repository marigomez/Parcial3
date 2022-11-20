#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include "strategy.h"


static void do_algoritmo_ (Istrategy * const me);

void estrategia_ctor(Istrategy * const me)
{
    static struct StrategyVtbl const vtbl = 
    {
        &do_algoritmo_,
    };

    me->vptr = &vtbl;
}

static void do_algoritmo_(Istrategy const * const me)
{
    assert(0);
}
