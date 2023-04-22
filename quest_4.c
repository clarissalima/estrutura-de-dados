#define TAM_MAX 11
#include <stdio.h>

struct seq_list{
    int vetor[TAM_MAX];
    int controle;
};

int cheia(struct seq_list* lista){
    if(TAM_MAX -1 == lista->controle){
        return 1;
    } else {
        return 0;
    }
}

int insere_meio(struct seq_list* lista, int num){
    if(!cheia(lista)){
        int i, k;
        while(i<=lista->controle && lista->vetor[i]<=num){
            i++;
        }

        for(k=lista->controle; k>=i; k--){
            lista->vetor[k+1] = lista->vetor[k];
        }
        lista->vetor[i] = num;
        lista->controle++;
        return 1;
    } else {
        return 0;
    }
}

int main(){
    struct seq_list lista = {{3, 5, 8, 9, 15, 17, 21, 34, 60, 99}, 9};
    int num = 18;

    if(insere_meio(&lista, num)){
        int i;
        for(i=0; i<=lista.controle; i++){
            printf("%d; ", lista.vetor[i]);
        }
        return 1;
    } else {
        return 0;
    }
}