#ifndef PILHA_C_INCLUDED
#define PILHA_C_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

void cria_pilha(pilha *p){
    p->topo = -1;
}

void push(pilha *p, brinquedo toy){

    if (p->topo == max-1){
        return 1; //Em caso de a pilha estar cheia, apresenta erro 1.
    }

    p->topo++;
    p->vet[p->topo] = toy;
}

int top(pilha *p, brinquedo *toy){
    *toy = p->vet[p->topo];
    return 0;
}

int cheia_pilha(pilha p){
    if (p.topo == max-1){
        return 1; //Em caso de a pilha estar cheia, apresenta erro 1.
    }
    return 0;
}

#endif // PILHA_C_INCLUDED
