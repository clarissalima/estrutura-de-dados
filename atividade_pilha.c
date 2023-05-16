#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct lista{
    char dado;
    struct lista* prox;
};
typedef struct lista Lista;

struct pilha{
    Lista* topo;
};
typedef struct pilha Pilha;

Pilha* criar(void){
    Pilha* novo = (Pilha*) malloc(sizeof(Pilha));
    novo->topo = NULL;
    return novo;
}

void push(Pilha* p, char i){
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->dado = i;
    novo->prox = p->topo;
    p->topo = novo;
}

int vazia(Pilha* p){
    return(p->topo==NULL);
}


char pop(Pilha* p){
    Lista* t;
    char aux;
    if(vazia(p)){
      return 0;
    }
    t = p->topo;
    aux = t->dado;
    p->topo = t->prox;
    free(t);
    return aux;
}


void libera(Pilha* p){
    Lista* q = p->topo;
    while(q!=0){
        Lista* t = q->prox;
        free(q);
        q = t;
    }
    free(p);
}

void funcao(Pilha* p){
    char char_in;
    char v;
    int i = 1;

    printf("Digite a expressao. \n");

    do{
        
        scanf("%c[\n]",&char_in);

        if(char_in == '\n'){ 
            break;
        }

        if(char_in == '{' || char_in == '[' || char_in == '('){
            push(p, char_in);
        } else {
           
            v = pop(p);

            if(char_in == '}' && v == '{'){
                i = 0;
            }

            if(char_in == ']' && v == '['){
               i = 0;
            }

            if(char_in == ')' && v == '('){
                i = 0;
            }
             
            if(i){
                break;
            } else {
                i = 0;
            }
        
        }

    } while(1);

    if(vazia(p) && i==0){
        printf("A expressao esta correta!");
    } else {
        printf("A expressao esta incorreta");

    }

    libera(p);

}

int main(){

    Pilha* pilha = criar();
    funcao(pilha);

}
