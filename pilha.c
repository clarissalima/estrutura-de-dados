#define N 50

struct pilha{
    int topo;
    int vetor[N];
};
typedef struct pilha Pilha;

Pilha* criar_pilha(){
    Pilha* novo = (Pilha*) malloc(sizeof(Pilha));
    novo->topo = -1;
    return novo;
}

Pilha* push_pilha(Pilha* p, float i){

    if(p->topo == N-1){
        printf("pilha vazia");
        exit(1);
    } else {
        p->vetor[p->topo+1] = i;
    }

    p->topo++;

}

 Pilha* vazia(Pilha* p){
    if(p->topo == -1){
        return 1;
    } else {
        return 0;
    }
 }

 Pilha* pop(Pilha* p){
    int v;

    if(vazia(p)){
        exit(1);
    } else {
        v = p->vetor[p->topo];
        p->topo--;
        return v; //perguntar pq de eu retornar o lixo

    }
 }

 