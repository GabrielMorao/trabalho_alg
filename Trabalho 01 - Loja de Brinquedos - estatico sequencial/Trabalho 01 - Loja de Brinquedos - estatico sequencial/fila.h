#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED
#include "pilha.h"
/*aqui a pilha.h foi incluida pois ja tem
os recursos necessarios para implementa��o da fila*/

typedef struct{
    int ini, fim;
    int qtd;
    pilha vet[max];
}fila;

void cria_fila(fila *f);
int insere_fila(fila *f, pilha cx);
int remove_fila(fila *f, pilha *cx);
int vazia_fila(fila *f);
int cheia_fila(fila *f);

#endif // FILA_H_INCLUDED
