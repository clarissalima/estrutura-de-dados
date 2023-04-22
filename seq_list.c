#define TAMANHO_MAX 12

struct seq_list_t {
    int vetor[TAMANHO_MAX];
    int qtd_elementos;
};

int vazia(struct seq_list_t* lista) {
    if(lista->qtd_elementos == -1) {
        return 1;
    } else {
        return 0;
    }
}

int cheia(struct seq_list_t* lista) {
    if(lista->qtd_elementos == TAMANHO_MAX - 1) {
        return 1;
    } else {
        return 0;
    }
}

// void elemento() {

// }

int inserir_inicio(struct seq_list_t* lista, int num) {
    if(cheia(lista)){
        return 0;
    } else {
        int i;
        for(i=lista->qtd_elementos; i<0; i--){
            lista->vetor[i+1] = lista->vetor[i];
        }
        lista->vetor[0] = num;
        lista->qtd_elementos++;
        return 1;
    }
}

int inserir_meio(struct seq_list_t* lista, int num){
    if(!cheia(lista)){
        int i, k = 0;
        while(i<=lista->qtd_elementos && lista->vetor[i]<num){
            i++;
        }
        for(k=lista->qtd_elementos; k>=i; k--){
            lista->vetor[k+1] = lista->vetor[k];
        }
        lista->vetor[i] = num;
        lista->qtd_elementos++;
        return 1;
    }else{
        return 0;
    }
}

int remover_inicio(struct seq_list_t* lista) {
  
    if(!vazia(lista)){
        int i;
        for(i=0; i<lista->qtd_elementos; i++){
            lista->vetor[i] = lista->vetor[i+1];
        }
        lista->qtd_elementos--;
        return 1;
    } else {
        return 0;
    }
}

int remover_meio(struct seq_list_t* lista, int num){
    if(!vazia(lista)){
        int i, k = 0;
        while(i<lista->qtd_elementos && lista->vetor[i]!=num){
            i++;
        }
        for(k=i; k<lista->qtd_elementos; k++){
            lista->vetor[k] = lista->vetor[k+1];
        }
        lista->qtd_elementos--;
        return 1;
    } else {
        return 0;
    }
}

int remover_fim(struct seq_list_t* lista){
    if(!vazia(lista)){
        lista->qtd_elementos--;
        return 1;
    } else {
        return 0;
    }
}

int exibir_posicao(struct seq_list_t* lista, int num) {
    if(!vazia(lista)){
        int i;
        while(i<lista->qtd_elementos && i!= num){
            i++;
        }
        return 1;
    } else {
        return 0;
    }

}

int exibir_numero(struct seq_list_t* lista, int num, int posicao){
    if(!vazia(lista)){
        int i;
        for(i=0; i<=posicao; i++){
            lista->vetor[i] = num;

        }
        return 1;

    } else {
        return 0;
    }

}

int main(){
    struct seq_list_t lista  = {{3, 5, 8, 9, 15, 17, 21, 34, 60, 99, }, 9};
    int num  = 18;

    if(inserir_meio(&lista, num)){

        int i;
        for(i=0; i<=lista.qtd_elementos; i++){
            printf("%d; ", lista.vetor[i]);
        }
        return 1;
    } else {
        return 0;
    }

}

