#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "strategy.h"
#include "estrategiaA.h"

int main ()
{
    estrategiaA v1;
    &v1.super;
    Istrategy const;
estrategia_ctor(&v1);

Istrategy *Istrategy = Istrategy_new();


do_algoritmo((Istrategy*)estrategiaA);

};

