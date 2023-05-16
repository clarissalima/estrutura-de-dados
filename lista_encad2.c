struct no{
    int dado;
    struct no* prox;
};
typedef struct no Lista;

Lista* lista_vazia(){
    return 0;
    //vai ser NULL quando passar pro papel
}

void insere_inicio(Lista** cabeca, int i){
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->dado = i;
    novo->prox = *cabeca;
    *cabeca = novo;
}

Lista* percorre_lista(Lista* cabeca){
    Lista* aux;
    for(aux=cabeca; aux!=0; aux=aux->prox){
        printf("%d", aux->dado);
    }
}

Lista* verifica_vazia(Lista* cabeca){
    if(cabeca==0){
        return 1;
    } else {
        return 0;
    }
}

Lista* busca_elemento(Lista* cabeca, int i){
    Lista* aux;
    //perguntar porque ja nao comparar oq tem dentro de dado no for, ex aux->dado == i
    for(aux=cabeca; aux!=0; aux=aux->prox){
        if(aux->dado == i){
            return aux;
        } else {
            return 0;
        }
    }
}