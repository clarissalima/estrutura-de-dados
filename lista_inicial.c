#include <stdio.h>

struct lista{
    int info[10];
    int controle;
};

int criarLista(struct lista*);
int esvaziar(struct lista*);
int mostrar(struct lista*);

void main(){
    struct lista l;
    criarLista(&l);
    esvaziar(&l);
}

int criarLista(struct lista* pl){
    pl -> controle = -1;
    return 1;
}

int esvaziar(struct lista* pl){
    if(pl -> controle == -1){
        printf("a lista já está vazia!");
    } else {
        pl -> controle = -1;
    }
}