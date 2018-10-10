#ifndef LISTA_C_INCLUDED
#define LISTA_C_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void cria_lista(lista *l){

    l->pos = -1;
}

int insere_na_lista(lista *l,brinquedo toy){

   l->pos++;
   l->vet[l->pos] = toy;
    return 0;
}

int vazia_lista(lista *l){
    if(l->pos == -1){
        return 1; // lista esta vazia;
    }
    return 0;
}

int cheia_lista(lista *l){
    if(l->pos == max-1){
        return 1; // lista esta cheia
    }
    return 0;
}

int remove_da_lista(lista *l, int pos, brinquedo toy){
    l->vet[pos-1].num_serial = -1;

    return 0;
}
#endif // LISTA_C_INCLUDED
