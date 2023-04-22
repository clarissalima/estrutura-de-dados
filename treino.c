#define TAM 11
struct lista {
    int v[TAM];
    int controle;
};

int criarLista(struct lista *);
int inserir(struct lista *, int);

int inserir(struct lista *pl, int valor){
    if(pl->controle == TAM){
        return 0;
    }

    int j, i=0;
    while(i < pl->controle && pl-> v[i] < valor)
    i++;

    for (j = pl->controle -1; j >= i; j--) {
        pl->v[j+1] = pl->v[j];
    }

    pl->v[i] = valor;
    pl->controle++;

    return 1;
}