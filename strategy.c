#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include "strategy.h"

void estrategia_ctor (strategy * const me, estrategias);
{
    me->estrategiaA = estrategiaA;
}

char estrategia_getA (strategy * const me);
{
    return me->estrategiaA
}

static char imprimir_A(strategy const * const me);
static char organizar_A(strategy const * const me);

void estrategia_ctor(strategy * const me)
{
    static struct estrategiaVtlb const vtbl = 
    {
        &organizar_A,
        &imprimir_A
    };
    
    me->vptr = &vtbl
    me->strategy= strategy;
}