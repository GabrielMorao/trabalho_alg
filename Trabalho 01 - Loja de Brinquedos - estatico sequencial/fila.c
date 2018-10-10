#ifndef FILA_C_INCLUDED
#define FILA_C_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

void cria_fila(fila* f) {
    f->ini = 0;
    f->fim = 0;
    f->qtd = 0;
    //return;
}

int estaCheia(fila* f) {
    return f->fim == max-1;
}

int estaVazia(fila* f) {
    if (f->qtd == 0)
        return 1;
    return 0;
}

void entra(fila* f, pilha cx) {
    if(estaVazia(f)){
        f->vet[f->ini] = cx;
    }
    else  if (estaCheia(f)){
        return 1;
    }
    else{
    f->vet[f->fim] = cx;
    }
    f->qtd++;
    f->fim++;
    return;
}

void sai_fila(fila* f, pilha *cx) {
    if (estaVazia(f)){
        return 1;
    }
    *cx = f->vet[f->ini];
    f->qtd--;
    if (f->ini == max-1)
        f->ini = 0;
    else
        f->ini++;
    return;
}

#endif // FILA_C_INCLUDED
