struct no{
    int dado;
    struct no* prox;
};
typedef struct no Lista;

Lista* lista_vazia(){
    return 0;
}

void insere_inicio(Lista** cabeca, int i){
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->dado = i;
    novo->prox = *cabeca;
    *cabeca = novo;
}

void percorre_lista(Lista* cabeca){
    Lista* a;

    for(a=cabeca; a!=0; a=a->prox){
        printf("%d\n", a->dado);

    }
}

void verifica_vazia(Lista* cabeca){
    if(cabeca==0){
        return 1;
    } else {
        return 0;
    }

}

Lista* remove(Lista* cabeca, int r){
    Lista* ant = 0;
    Lista* aux = cabeca;
    while(aux!=0 && aux->dado!=r){
        ant = aux;
        aux = aux->prox;

    }
    if(ant == 0){
        cabeca = aux->prox;
    } else {
        ant->prox = aux->prox;
    }
    free(aux);
    return cabeca;
}



