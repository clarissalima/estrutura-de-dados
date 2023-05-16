struct no{
    int dado;
    struct no* ant;
    struct no* prox;
};
typedef struct no lista;

lista* insere_inicio(lista* cabeca, int i){
    lista* novo = (lista*) malloc(sizeof(lista));
    novo->dado = i;
    novo->prox = cabeca;
    novo->ant = 0; //NULL

    if(cabeca!=0){ //ja cria de todo jeito o novo elemento, mas se tiver algum faz o podeiro ant apontar pro novo elemento
        cabeca->ant = novo;
        return novo; //retorna o novo primeiro elemento
    } else {
        return 0; // posso retornar 0 aqui?
    }

}


lista* busca(lista* cabeca, int b){
    lista* aux;
    for(aux=cabeca; aux!=0; aux=aux->prox){
        if(aux->dado == b){
            return aux;
        } else {
            return 0;
        }
    }
}

lista* remove(lista* cabeca, int i){
    lista* aux = busca(cabeca, i);

    if(aux == 0){
        return cabeca;
    }

    if(aux == cabeca){
        cabeca = aux->prox;
    } else {
        aux->ant->prox = aux->prox;
    }

    if(aux->prox != 0){
        aux->prox->ant = aux->ant;
    }

    free(aux);
    return cabeca;

}


