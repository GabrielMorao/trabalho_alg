#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"
#include "pilha.h"
#include "fila.h"

int main()
{
    printf("TESTE DA MAIN\n");
    lista l;
    pilha p;
    cria_lista(&l);
    brinquedo b,b1,b2,b3,b4;
    b1.num_serial = 1;
    strcpy(b1.nome,"ioio");
    b2.num_serial = 2;
    strcpy(b2.nome,"boneca");
    b3.num_serial = 3;
    strcpy(b3.nome,"robo");
    b4.num_serial = 4;
    strcpy(b4.nome,"carro");


    insere_na_lista(&l,b1);
    insere_na_lista(&l,b2);
    insere_na_lista(&l,b3);
    insere_na_lista(&l,b4);
    for(int i =0; i<4; i++){
        printf("%s\n",l.vet[i].nome);
    }
    remove_da_lista(&l,1,b1);
    remove_da_lista(&l,3,b1);
     for(int i =0; i<4; i++){
    if(l.vet[i].num_serial != -1)
    printf("\n%s\n",l.vet[i].nome);
     }

    printf("\n");
    printf("TESTE DA MAIN, PILHA\n");
    cria_pilha(&p);
    push(&p,b1);
    push(&p,b2);
    push(&p,b3);
    push(&p,b4);
    printf("\n%s\n",p.vet[p.topo].nome);

    printf("\n");
    printf("TESTE DA MAIN, FILA\n");
    pilha p1,p2;
    cria_pilha(&p1);
    cria_pilha(&p2);
    b1.num_serial = 1;
    strcpy(b1.nome,"ioio");
    b2.num_serial = 2;
    strcpy(b2.nome,"boneca");
    b3.num_serial = 3;
    strcpy(b3.nome,"robo");
    b4.num_serial = 4;
    strcpy(b4.nome,"carro");
    push(&p1,b1);
    push(&p1,b2);
    push(&p2,b3);
    push(&p2,b4);
    //printf("\n%s\n",p.vet[p.topo].nome);
    fila *f;
    cria_fila(&f);
    entra(&f,p1);
    sai_fila(&f,&p1);
    top(&p1,&b);
    printf("%s\n",b.nome);
    entra(&f,p2);
    sai_fila(&f,&p2);
    top(&p2,&b);
    printf("%s\n",b.nome);

    return 0;
}

/*
Especifica��es:

1<= n <= 1000; Tipo inteiro;
1<= k <= n; Tipo inteiro;
1<= p <= 1000; Tipo inteiro;

*/
